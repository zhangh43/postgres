/*-------------------------------------------------------------------------
 *
 * nodeSeqscan.c
 *	  Support routines for sequential scans of relations.
 *
 * Portions Copyright (c) 1996-2016, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *	  src/backend/executor/nodeSeqscan.c
 *
 *-------------------------------------------------------------------------
 */
/*
 * INTERFACE ROUTINES
 *		ExecSeqScan				sequentially scans a relation.
 *		ExecSeqNext				retrieve next tuple in sequential order.
 *		ExecInitSeqScan			creates and initializes a seqscan node.
 *		ExecEndSeqScan			releases any storage allocated.
 *		ExecReScanSeqScan		rescans the relation
 *
 *		ExecSeqScanEstimate		estimates DSM space needed for parallel scan
 *		ExecSeqScanInitializeDSM initialize DSM for parallel scan
 *		ExecSeqScanInitializeWorker attach to DSM info in parallel worker
 */
#include "postgres.h"

#include "access/relscan.h"
#include "executor/execdebug.h"
#include "executor/nodeSeqscan.h"
#include "utils/rel.h"

#include "miscadmin.h"
#include "access/relscan.h"
#include "catalog/pg_class.h"
#include "catalog/pg_operator.h"
#include "commands/explain.h"
#include "executor/nodeCustom.h"
#include "executor/tuptable.h"
#include "optimizer/cost.h"
#include "optimizer/paths.h"
#include "optimizer/pathnode.h"
#include "optimizer/planner.h"
#include "optimizer/restrictinfo.h"
#include "utils/guc.h"
#include "utils/lsyscache.h"
#include "utils/snapmgr.h"
#include "utils/tqual.h"
#include "utils/memutils.h"
#include "nodes/pg_list.h"

static void VInitScanRelation(ScanState *node, EState *estate, int eflags);
static TupleTableSlot *VSeqNext(CustomScanState *css);

/*-------------------------- Vectorize part of nodeSeqScan ---------------------------------*/

#include "executor.h"
#include "execTuples.h"
#include "nodeSeqscan.h"
#include "vectorTupleSlot.h"
#include "utils.h"
#include "vtype/vtype.h"

/*
 * VectorScanState - state object of vectorscan on executor.
 */
typedef struct VectorScanState
{
	CustomScanState	css;

	/* Attributes for vectorization */
	bool		scanFinish;
} VectorScanState;

/* CustomScanMethods */
static Node *CreateVectorScanState(CustomScan *custom_plan);

/* CustomScanExecMethods */
static void BeginVectorScan(CustomScanState *node, EState *estate, int eflags);
static void ReScanVectorScan(CustomScanState *node);
static TupleTableSlot *ExecVectorScan(CustomScanState *node);
static void EndVectorScan(CustomScanState *node);

static TupleTableSlot *VSeqNext(CustomScanState *css);
static bool VSeqRecheck(CustomScanState *node, TupleTableSlot *slot);

static CustomScanMethods	vectorscan_scan_methods = {
	"vectorscan",			/* CustomName */
	CreateVectorScanState,	/* CreateCustomScanState */
};

static CustomExecMethods	vectorscan_exec_methods = {
	"vectorscan",			/* CustomName */
	BeginVectorScan,		/* BeginCustomScan */
	ExecVectorScan,			/* ExecCustomScan */
	EndVectorScan,			/* EndCustomScan */
	ReScanVectorScan,		/* ReScanCustomScan */
	NULL,					/* MarkPosCustomScan */
	NULL,					/* RestrPosCustomScan */
	NULL,					/* EstimateDSMCustomScan */
	NULL,					/* InitializeDSMCustomScan */
	NULL,					/* InitializeWorkerCustomScan */
	NULL,					/* ExplainCustomScan */
};


/*
 * CreateVectorScanState - A method of CustomScan; that populate a custom
 * object being delivered from CustomScanState type, according to the
 * supplied CustomPath object.
 *
 */
static Node *
CreateVectorScanState(CustomScan *custom_plan)
{
	VectorScanState   *css = MemoryContextAllocZero(CurTransactionContext,
				                                                 sizeof(VectorScanState));
	/* Set tag and executor callbacks */
	NodeSetTag(css, T_CustomScanState);

	css->css.methods = &vectorscan_exec_methods;

	return (Node *) css;
}

/*
 * BeginVectorScan - A method of CustomScanState; that initializes
 * the supplied VectorScanState object, at beginning of the executor.
 *
 */
static void
BeginVectorScan(CustomScanState *css, EState *estate, int eflags)
{
	VectorScanState *vscanstate;
	ScanState	*scanstate;
	CustomScan  *cscan;
	SeqScan		*node;
	
	/* clear state initialized in ExecInitCustomScan */
	ClearCustomScanState(css);

	cscan = (CustomScan *)css->ss.ps.plan;
	node = (SeqScan *)linitial(cscan->custom_plans);
	/*
	 * Once upon a time it was possible to have an outerPlan of a SeqScan, but
	 * not any more.
	 */
	Assert(outerPlan(node) == NULL);
	Assert(innerPlan(node) == NULL);

	vscanstate = (VectorScanState*)css;

	vscanstate->scanFinish = false;
	scanstate = &vscanstate->css.ss;
	/*
	 * create state structure
	 */
	scanstate->ps.plan = (Plan *) node;
	scanstate->ps.state = estate;

	/*
	 * Miscellaneous initialization
	 *
	 * create expression context for node
	 */
	ExecAssignExprContext(estate, &scanstate->ps);

	/*
	 * initialize child expressions
	 */
	scanstate->ps.targetlist = (List *)
		ExecInitExpr((Expr *) node->plan.targetlist,
					 (PlanState *) scanstate);
	scanstate->ps.qual = (List *)
		ExecInitExpr((Expr *) node->plan.qual,
					 (PlanState *) scanstate);

	/*
	 * tuple table initialization
	 */
	VExecInitResultTupleSlot(estate, &scanstate->ps);
	VExecInitScanTupleSlot(estate, scanstate);

	/*
	 * initialize scan relation
	 */
	VInitScanRelation(scanstate, estate, eflags);

	scanstate->ps.ps_TupFromTlist = false;

	/*
	 * Initialize result tuple type and projection info.
	 */
	VExecAssignResultTypeFromTL(&scanstate->ps);
	ExecAssignScanProjectionInfo(scanstate);
}

/*
 * ReScanVectorScan - A method of CustomScanState; that rewind the current
 * seek position.
 *
 * Derived from ExecReScanSeqScan().
 */
static void
ReScanVectorScan(CustomScanState *node)
{
	HeapScanDesc scan;

	scan = node->ss.ss_currentScanDesc;

	if (scan != NULL)
		heap_rescan(scan,		/* scan desc */
					NULL);		/* new scan keys */

	ExecScanReScan((ScanState *) node);
}



/*
 * ExecVectorScan - A method of CustomScanState; that fetches a tuple
 * from the relation, if exist anymore.
 *
 * Derived from ExecSeqScan().
 */
static TupleTableSlot *
ExecVectorScan(CustomScanState *node)
{
	return VExecScan(node,
					 (VExecScanAccessMtd) VSeqNext,
					 (VExecScanRecheckMtd) VSeqRecheck);
}

/*
 * CTidEndCustomScan - A method of CustomScanState; that closes heap and
 * scan descriptor, and release other related resources.
 *
 * Derived from ExecEndSeqScan().
 */
static void
EndVectorScan(CustomScanState *node)
{
	Relation	relation;
	HeapScanDesc scanDesc;

	/*
	 * get information from node
	 */
	relation = node->ss.ss_currentRelation;
	scanDesc = node->ss.ss_currentScanDesc;

	/*
	 * Free the exprcontext
	 */
	ExecFreeExprContext(&node->ss.ps);
	
	VExecClearTuple(node->ss.ps.ps_ResultTupleSlot);
	VExecClearTuple(node->ss.ss_ScanTupleSlot);

	/*
	 * close heap scan
	 */
	if (scanDesc != NULL)
	{
		heap_endscan(scanDesc);
		node->ss.ss_currentScanDesc = NULL;
	}
	
	/*
	 * close the heap relation.
	 */
	ExecCloseScanRelation(relation);

	node->ss.ss_currentRelation = NULL;
}

/*
 * Interface to get the custom scan plan for vector scan
 */
CustomScan *
MakeCustomScanForSeqScan(void)
{
	CustomScan *cscan = (CustomScan *)makeNode(CustomScan);
	cscan->methods = &vectorscan_scan_methods;

	return cscan;
}

/*
 * Initialize vectorscan CustomScan node.
 */
void
InitVectorScan(void)
{
	/* Register a vscan type of custom scan node */
	RegisterCustomScanMethods(&vectorscan_scan_methods);
}

/*---------------------- End of vectorized part of nodeSeqscan ---------------------------*/



/* ----------------------------------------------------------------
 *						Scan Support
 * ----------------------------------------------------------------
 */


/* ----------------------------------------------------------------
 *		SeqNext
 *
 *		This is a workhorse for ExecSeqScan
 * ----------------------------------------------------------------
 */
static TupleTableSlot *
VSeqNext(CustomScanState *css)
{
	HeapTuple		tuple;
	HeapScanDesc	scandesc;
	int				natts;
	EState		   *estate;
	ScanDirection	direction;
	TupleTableSlot *slot;
	VectorTupleSlot *vslot;
	Datum		   *values;
	bool		   *isnull;
	/* tuple batch is composed of multiple vectors. */
	int				row;

	VectorScanState *node;

	node = (VectorScanState *)css;
	
	/*
	 * get information from the estate and scan state
	 */
	scandesc = node->css.ss.ss_currentScanDesc;
	estate = node->css.ss.ps.state;
	direction = estate->es_direction;
	slot = node->css.ss.ss_ScanTupleSlot;
	natts = slot->tts_tupleDescriptor->natts;

	if (node->scanFinish)
	{
		VExecClearTuple(slot);
		return slot;
	}

	if (scandesc == NULL)
	{
		/*
		 * We reach here if the scan is not parallel, or if we're serially
		 * executing a scan that was planned to be parallel.
		 */
		scandesc = heap_beginscan(node->css.ss.ss_currentRelation,
								  estate->es_snapshot,
								  0, NULL);
		node->css.ss.ss_currentScanDesc = scandesc;
	}

	VExecClearTuple(slot);

	/* palloc intermediate values and isnull for each tuple. */
	values = (Datum *) palloc0(natts * sizeof(Datum));
	isnull = (bool *) palloc0(natts * sizeof(bool));
	vslot = (VectorTupleSlot *)slot;

	for (row = 0 ; row < BATCHSIZE; row++)
	{
		/*
		 * get the next tuple from the table
		 */
		tuple = heap_getnext(scandesc, direction);
		if (tuple)
			VExecStoreTuple(tuple,	/* tuple to store */
					slot,	/* slot to store in */
					scandesc->rs_cbuf,		/* buffer associated with this
											 * tuple */
					false);	/* don't pfree this pointer */
		else
		{
			/* scan finish, but we still need to emit current vslot */
			node->scanFinish = true;
			break;
		}
	}

	/* form tuple with tuple batch */
	if (row > 0)
	{
		vslot->dim = row;
		memset(vslot->skip, false, sizeof(bool) * row);
		
		/* deform the vector slot now */
		Vslot_getallattrs(slot);
		/*
		 * And return the virtual tuple.
		 */
		ExecStoreVirtualTuple(slot);
	}

	/*
	 * save the tuple and the buffer returned to us by the access methods in
	 * our scan tuple slot and return the slot.  Note: we pass 'false' because
	 * tuples returned by heap_getnext() are pointers onto disk pages and were
	 * not created with palloc() and so should not be pfree()'d.  Note also
	 * that ExecStoreTuple will increment the refcount of the buffer; the
	 * refcount will not be dropped until the tuple table slot is cleared.
	 */

	pfree(values);
	pfree(isnull);

	return slot;
}

/*
 * SeqRecheck -- access method routine to recheck a tuple in EvalPlanQual
 */
static bool
VSeqRecheck(CustomScanState *node, TupleTableSlot *slot)
{
	return true;
}

static void
VInitScanRelation(ScanState *node, EState *estate, int eflags)
{
	Relation	currentRelation;
	TupleDesc	vdesc;
	TupleTableSlot *slot;
	int 		i;

	/*
	 * get the relation object id from the relid'th entry in the range table,
	 * open that relation and acquire appropriate lock on it.
	 */
	currentRelation = ExecOpenScanRelation(estate,
								   ((SeqScan *) node->ps.plan)->scanrelid,
										   eflags);

	node->ss_currentRelation = currentRelation;

	/* 
	 * since we will change the attr type of tuple desc to vector
	 * type. we need to copy it to avoid dirty the relcache
	 */
	vdesc = CreateTupleDescCopyConstr(RelationGetDescr(currentRelation));

	/* change the attr type of tuple desc to vector type */
	for (i = 0; i < vdesc->natts; i++)
	{
		Form_pg_attribute	attr = vdesc->attrs[i];
		Oid					vtypid = GetVtype(attr->atttypid);
		if (vtypid != InvalidOid)
			attr->atttypid = vtypid;
		else
			elog(ERROR, "cannot find vectorized type for type %d",
					attr->atttypid);
	}

	/* and report the scan tuple slot's rowtype */
	ExecAssignScanType(node, vdesc);

	slot = ((ScanState *)node)->ss_ScanTupleSlot;
	InitializeVectorSlotColumn((VectorTupleSlot *)slot);
}

