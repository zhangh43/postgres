/*-------------------------------------------------------------------------
 *
 * scan.c
 *	  TODO file description
 *
 *
 * Copyright (c) 2019-Present Pivotal Software, Inc.
 *
 *
 *-------------------------------------------------------------------------
 */

#include "postgres.h"

#include "miscadmin.h"
#include "access/relscan.h"
#include "catalog/pg_class.h"
#include "catalog/pg_operator.h"
#include "commands/explain.h"
#include "executor/nodeCustom.h"
#include "executor/nodeSeqscan.h"
#include "executor/tuptable.h"
#include "optimizer/cost.h"
#include "optimizer/paths.h"
#include "optimizer/pathnode.h"
#include "optimizer/planner.h"
#include "optimizer/restrictinfo.h"
#include "utils/guc.h"
#include "utils/lsyscache.h"
#include "utils/rel.h"
#include "utils/snapmgr.h"
#include "utils/tqual.h"
#include "utils/memutils.h"
#include "nodes/pg_list.h"
#include "vectorEngine.h"

#include "nodeScan.h"
#include "utils.h"
#include "vtype.h"

#define slot_get_values(slot)	((slot)->tts_values)
#define slot_get_isnull(slot)	((slot)->tts_isnull)

/*
 * VectorScanState - state object of vectorscan on executor.
 */
typedef struct VectorScanState
{
	CustomScanState	css;

	/* Attributes for vectorization */
	bool		scanFinish;
} VectorScanState;

/*
 * prototypes from functions in execScan.c
 */
typedef TupleTableSlot *(*ExecVScanAccessMtd) (CustomScanState *node);
typedef bool (*ExecVScanRecheckMtd) (CustomScanState *node, TupleTableSlot *slot);


/* static variables */
static bool			enable_vectorscan;

/* CustomScanMethods */
static Node *CreateVectorScanState(CustomScan *custom_plan);

/* CustomScanExecMethods */
static void BeginVectorScan(CustomScanState *node, EState *estate, int eflags);
static void ReScanVectorScan(CustomScanState *node);
static TupleTableSlot *ExecVectorScan(CustomScanState *node);
static void EndVectorScan(CustomScanState *node);

static TupleTableSlot *ExecVScan(CustomScanState *node,
									ExecVScanAccessMtd accessMtd,
									ExecVScanRecheckMtd recheckMtd);

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
 * Copy from execScan.c
 *
 * ExecScanFetch -- fetch next potential tuple
 *
 * This routine is concerned with substituting a test tuple if we are
 * inside an EvalPlanQual recheck.  If we aren't, just execute
 * the access method's next-tuple routine.
 */
static inline TupleTableSlot *
ExecScanFetch(CustomScanState *node,
			  ExecVScanAccessMtd accessMtd,
			  ExecVScanRecheckMtd recheckMtd)
{
	EState			*estate;
	
	estate = node->ss.ps.state;

	if (estate->es_epqTuple != NULL)
	{
		/*
		 * We are inside an EvalPlanQual recheck.  Return the test tuple if
		 * one is available, after rechecking any access-method-specific
		 * conditions.
		 */
		Index		scanrelid = ((Scan *) node->ss.ps.plan)->scanrelid;

		if (scanrelid == 0)
		{
			TupleTableSlot *slot = node->ss.ss_ScanTupleSlot;

			/*
			 * This is a ForeignScan or CustomScan which has pushed down a
			 * join to the remote side.  The recheck method is responsible not
			 * only for rechecking the scan/join quals but also for storing
			 * the correct tuple in the slot.
			 */
			if (!(*recheckMtd) (node, slot))
				ExecClearTuple(slot);	/* would not be returned by scan */
			return slot;
		}
		else if (estate->es_epqTupleSet[scanrelid - 1])
		{
			TupleTableSlot *slot = node->ss.ss_ScanTupleSlot;

			/* Return empty slot if we already returned a tuple */
			if (estate->es_epqScanDone[scanrelid - 1])
				return ExecClearTuple(slot);
			/* Else mark to remember that we shouldn't return more */
			estate->es_epqScanDone[scanrelid - 1] = true;

			/* Return empty slot if we haven't got a test tuple */
			if (estate->es_epqTuple[scanrelid - 1] == NULL)
				return ExecClearTuple(slot);

			/* Store test tuple in the plan node's scan slot */
			ExecStoreTuple(estate->es_epqTuple[scanrelid - 1],
						   slot, InvalidBuffer, false);

			/* Check if it meets the access-method conditions */
			if (!(*recheckMtd) (node, slot))
				ExecClearTuple(slot);	/* would not be returned by scan */

			return slot;
		}
	}

	/*
	 * Run the node-type-specific access method function to get the next tuple
	 */
	return (*accessMtd) (node);
}

/*
 * derive from ExecScan
 *
 * ----------------------------------------------------------------
 *		ExecScan
 *
 *		Scans the relation using the 'access method' indicated and
 *		returns the next qualifying tuple in the direction specified
 *		in the global variable ExecDirection.
 *		The access method returns the next tuple and ExecScan() is
 *		responsible for checking the tuple returned against the qual-clause.
 *
 *		A 'recheck method' must also be provided that can check an
 *		arbitrary tuple of the relation against any qual conditions
 *		that are implemented internal to the access method.
 *
 *		Conditions:
 *		  -- the "cursor" maintained by the AMI is positioned at the tuple
 *			 returned previously.
 *
 *		Initial States:
 *		  -- the relation indicated is opened for scanning so that the
 *			 "cursor" is positioned before the first qualifying tuple.
 * ----------------------------------------------------------------
 */
static TupleTableSlot *
ExecVScan(CustomScanState *css,
		 ExecVScanAccessMtd accessMtd,	/* function returning a tuple */
		 ExecVScanRecheckMtd recheckMtd)
{
	ExprContext		*econtext;
	List			*qual;
	ProjectionInfo	*projInfo;
	ExprDoneCond	isDone;
	TupleTableSlot	*resultSlot;
	ScanState 		*node;
	
	node = &css->ss;

	/*
	 * Fetch data from node
	 */
	qual = node->ps.qual;
	projInfo = node->ps.ps_ProjInfo;
	econtext = node->ps.ps_ExprContext;

	/*
	 * If we have neither a qual to check nor a projection to do, just skip
	 * all the overhead and return the raw scan tuple.
	 */
	if (!qual && !projInfo)
	{
		ResetExprContext(econtext);
		return ExecScanFetch(css, accessMtd, recheckMtd);
	}

	/*
	 * Check to see if we're still projecting out tuples from a previous scan
	 * tuple (because there is a function-returning-set in the projection
	 * expressions).  If so, try to project another one.
	 */
	if (node->ps.ps_TupFromTlist)
	{
		Assert(projInfo);		/* can't get here if not projecting */
		resultSlot = ExecProject(projInfo, &isDone);
		if (isDone == ExprMultipleResult)
			return resultSlot;
		/* Done with that source tuple... */
		node->ps.ps_TupFromTlist = false;
	}

	/*
	 * Reset per-tuple memory context to free any expression evaluation
	 * storage allocated in the previous tuple cycle.  Note this can't happen
	 * until we're done projecting out tuples from a scan tuple.
	 */
	ResetExprContext(econtext);

	/*
	 * get a tuple from the access method.  Loop until we obtain a tuple that
	 * passes the qualification.
	 */
	for (;;)
	{
		TupleTableSlot *slot;

		CHECK_FOR_INTERRUPTS();

		slot = ExecScanFetch(css, accessMtd, recheckMtd);

		/*
		 * if the slot returned by the accessMtd contains NULL, then it means
		 * there is nothing more to scan so we just return an empty slot,
		 * being careful to use the projection result slot so it has correct
		 * tupleDesc.
		 */
		if (TupIsNull(slot))
		{
			if (projInfo)
				return ExecClearTuple(projInfo->pi_slot);
			else
				return slot;
		}

		/*
		 * place the current tuple into the expr context
		 */
		econtext->ecxt_scantuple = slot;

		/*
		 * check that the current tuple satisfies the qual-clause
		 *
		 * check for non-nil qual here to avoid a function call to ExecQual()
		 * when the qual is nil ... saves only a few cycles, but they add up
		 * ...
		 */
		if (!qual || ExecQual(qual, econtext, false))
		{
			/*
			 * Found a satisfactory scan tuple.
			 */
			if (projInfo)
			{
				/*
				 * Form a projection tuple, store it in the result tuple slot
				 * and return it --- unless we find we can project no tuples
				 * from this scan tuple, in which case continue scan.
				 */
				resultSlot = ExecProject(projInfo, &isDone);
				if (isDone != ExprEndResult)
				{
					node->ps.ps_TupFromTlist = (isDone == ExprMultipleResult);
					return resultSlot;
				}
			}
			else
			{
				/*
				 * Here, we aren't projecting, so just return scan tuple.
				 */
				return slot;
			}
		}
		else
			InstrCountFiltered1(node, 1);

		/*
		 * Tuple fails qual, so free per-tuple memory and try again.
		 */
		ResetExprContext(econtext);
	}
}

/*
 * Derived from SeqNext().
 */
static TupleTableSlot *
VectorScanAccess(CustomScanState *css)
{
	HeapTuple		tuple;
	/* 
	 * batchtuple store a batch in a tuple 
	 * TODO: skip convertion between bath and heaptuple
	 */
	HeapTuple		batchtuple;
	HeapScanDesc	scandesc;
	int				natts;
	EState		   *estate;
	ScanDirection	direction;
	TupleTableSlot *slot;
	Datum		   *values;
	bool		   *isnull;
	/* tuple batch is composed of multiple vectors. */
	vtype		   **tb;

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
		ExecClearTuple(slot);
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

	/* initailize tuple batch */
	tb = palloc(sizeof(vtype *) * natts);
	for (int i = 0; i < natts; i++)
	{
		Oid			typid;

		typid = slot->tts_tupleDescriptor->attrs[i]->atttypid;
		tb[i] = buildvtype(typid, BATCHSIZE, NULL);
		tb[i]->dim = 0;
	}

	/* palloc intermediate values and isnull for each tuple. */
	values = (Datum *) palloc0(natts * sizeof(Datum));
	isnull = (bool *) palloc0(natts * sizeof(bool));

	for (int i = 0 ; i < BATCHSIZE; i++)
	{
		/*
		 * get the next tuple from the table
		 */
		tuple = heap_getnext(scandesc, direction);
	
		if (!tuple)
		{
			node->scanFinish = true;
			break;
		}

		heap_deform_tuple(tuple, slot->tts_tupleDescriptor, values, isnull);

		for (int j = 0; j < natts; j++)
		{
			tb[j]->values[i] = values[j];
			tb[j]->isnull[i] = isnull[j];
			tb[j]->dim++;
		}
	}

	/* form tuple with tuple batch */
	if (tb[0] && tb[0]->dim > 0)
	{
		Datum		batch_values[natts];
		bool		batch_isnull[natts];

		for (int i = 0; i < natts; i++)
		{
			batch_values[i] = PointerGetDatum(tb[i]);
			batch_isnull[i] = false;
		}

		batchtuple = heap_form_tuple(slot->tts_tupleDescriptor,
								 batch_values, batch_isnull);
	}
	else
		batchtuple = NULL;

	/*
	 * save the tuple and the buffer returned to us by the access methods in
	 * our scan tuple slot and return the slot.  Note: we pass 'false' because
	 * tuples returned by heap_getnext() are pointers onto disk pages and were
	 * not created with palloc() and so should not be pfree()'d.  Note also
	 * that ExecStoreTuple will increment the refcount of the buffer; the
	 * refcount will not be dropped until the tuple table slot is cleared.
	 */
	if (batchtuple)
		ExecStoreTuple(batchtuple,	/* batchtuple to store */
					   slot,	/* slot to store in */
					   scandesc->rs_cbuf,		/* buffer associated with this
												 * batchtuple */
					   false);	/* don't pfree this pointer */
	else
		ExecClearTuple(slot);

	pfree(values);
	pfree(isnull);

	return slot;
}

static void
InitScanRelation(ScanState *node, EState *estate, int eflags)
{
	Relation	currentRelation;
	TupleDesc	vdesc;

	/*
	 * get the relation object id from the relid'th entry in the range table,
	 * open that relation and acquire appropriate lock on it.
	 */
	currentRelation = ExecOpenScanRelation(estate,
								   ((SeqScan *) node->ps.plan)->scanrelid,
										   eflags);

	node->ss_currentRelation = currentRelation;

	/* since we need to change the vtype in TupleDesc in relcache, we need to copy it. */
	vdesc = CreateTupleDescCopyConstr(RelationGetDescr(currentRelation));

	for (int i = 0; i < vdesc->natts; i++)
	{
		Form_pg_attribute attr = vdesc->attrs[i];
		Oid                     vtypid = GetVtype(attr->atttypid);
		if (vtypid != InvalidOid)
			attr->atttypid = vtypid;
	}

	/* and report the scan tuple slot's rowtype */
	ExecAssignScanType(node, vdesc);
}

/*
 * BeginVectorScan - A method of CustomScanState; that initializes
 * the supplied VectorScanState object, at beginning of the executor.
 *
 * Derived from InitScanRelation().
 */
static void
BeginVectorScan(CustomScanState *css, EState *estate, int eflags)
{
	VectorScanState *vscanstate;
	ScanState	*scanstate;
	CustomScan  *cscan;
	SeqScan		*node;
	
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
	ExecInitResultTupleSlot(estate, &scanstate->ps);
	ExecInitScanTupleSlot(estate, scanstate);

	/*
	 * initialize scan relation
	 */
	InitScanRelation(scanstate, estate, eflags);

	scanstate->ps.ps_TupFromTlist = false;

	/*
	 * Initialize result tuple type and projection info.
	 */
	ExecAssignResultTypeFromTL(&scanstate->ps);
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
 * Derived from SeqRecheck().
 */
static bool
VectorScanRecheck(CustomScanState *node, TupleTableSlot *slot)
{
	return true;
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
	return ExecVScan(node,
					 (ExecVScanAccessMtd) VectorScanAccess,
					 (ExecVScanRecheckMtd) VectorScanRecheck);
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
	HeapScanDesc scanDesc;
	
	/*
	 * get information from node
	 */
	scanDesc = node->ss.ss_currentScanDesc;


	/*
	 * close heap scan
	 */
	if (scanDesc != NULL)
		heap_endscan(scanDesc);

}
/*
 * Initialize vectorscan CustomScan node.
 */
void
InitVectorScan(void)
{

	DefineCustomBoolVariable("enable_vectorscan",
							 "Enables the planner's use of vector-scan plans.",
							 NULL,
							 &enable_vectorscan,
							 true,
							 PGC_USERSET,
							 GUC_NOT_IN_SAMPLE,
							 NULL, NULL, NULL);

	/* Register a vscan type of custom scan node */
	RegisterCustomScanMethods(&vectorscan_scan_methods);
}
