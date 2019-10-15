/*-------------------------------------------------------------------------
 *
 * v_scan.c
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
#include "utils/snapmgr.h"
#include "utils/tqual.h"
#include "utils/memutils.h"

#include "vector_engine.h"

#include "vcheck.h"

typedef struct VectorScanState VectorScanState;

/*
 * VectorScanState - state object of vectorscan on executor.
 */
struct VectorScanState
{
	CustomScanState	css;

	/* Attributes for vectorization */
	bool		scanFinish;
};

struct VectorScanTupleTableSlot
{
	TupleTableSlot slot;
};

#define slot_get_values(slot)	((slot)->tts_values)
#define slot_get_isnull(slot)	((slot)->tts_isnull)

/* static variables */
static bool			enable_vectorscan;
static set_rel_pathlist_hook_type set_rel_pathlist_next = NULL;

/* function declarations */
static void SetVectorScanPath(PlannerInfo *root,
							  RelOptInfo *rel,
							  Index rti,
							  RangeTblEntry *rte);
/* CustomPathMethods */
static Plan *PlanVectorScanPath(PlannerInfo *root,
								RelOptInfo *rel,
								CustomPath *best_path,
								List *tlist,
								List *clauses,
								List *custom_plans);

/* CustomScanMethods */
static Node *CreateVectorScanState(CustomScan *custom_plan);

/* CustomScanExecMethods */
static void BeginVectorScan(CustomScanState *node, EState *estate, int eflags);
static void ReScanVectorScan(CustomScanState *node);
static TupleTableSlot *ExecVectorScan(CustomScanState *node);
static void EndVectorScan(CustomScanState *node);

extern TupleTableSlot *
ExecVScan(ScanState *node,
		 ExecScanAccessMtd accessMtd,	/* function returning a tuple */
		 ExecScanRecheckMtd recheckMtd);

/* static table of custom-scan callbacks */
static CustomPathMethods	vectorscan_path_methods = {
	"vectorscan",			/* CustomName */
	PlanVectorScanPath,		/* PlanCustomPath */
};

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
 * SetVectorScanPath - entrypoint of the series of custom-scan execution.
 *
 * Derived from create_seqscan_path().
 */
static void
SetVectorScanPath(PlannerInfo *root, RelOptInfo *baserel,
				  Index rtindex, RangeTblEntry *rte)
{
	char		relkind;
	int			parallel_workers = 0;

	/* only plain relations are supported */
	if (rte->rtekind != RTE_RELATION)
	{
		/* calls secondary module if exists */
		if (set_rel_pathlist_next)
			set_rel_pathlist_next(root, baserel, rtindex, rte);
		return;
	}
	relkind = get_rel_relkind(rte->relid);
	if (relkind != RELKIND_RELATION &&
		relkind != RELKIND_MATVIEW &&
		relkind != RELKIND_TOASTVALUE)
	{
		/* calls secondary module if exists */
		if (set_rel_pathlist_next)
			set_rel_pathlist_next(root, baserel, rtindex, rte);
		return;
	}

	if (!enable_vectorscan)
	{
		/* calls secondary module if exists */
		if (set_rel_pathlist_next)
			set_rel_pathlist_next(root, baserel, rtindex, rte);
		return;
	}

	/* check whether targetlist and qual support vectorization */
	ListCell		*cell;
	foreach(cell, root->processed_tlist)
	{
		TargetEntry		*te = lfirst(cell);
		Expr *expr = te->expr;
		if (expr && IsA(expr, OpExpr))
		{
			if(!hasVectorizedFunc(((OpExpr *) expr)->opfuncid))
			{
				/* calls secondary module if exists */
				if (set_rel_pathlist_next)
					set_rel_pathlist_next(root, baserel, rtindex, rte);
				return;
			}
		}
	}

	/* FIXME: do not add vectorscan blindly */
	{
		CustomPath *cpath;
		Relids		required_outer;

		/*
		 * We don't support pushing join clauses into the quals of a vectorscan,
		 * but it could still have required parameterization due to LATERAL
		 * refs in its tlist.
		 */
		required_outer = baserel->lateral_relids;

		cpath = palloc0(sizeof(CustomPath));

		cpath->methods = &vectorscan_path_methods;

		cpath->path.type = T_CustomPath;
		cpath->path.pathtype = T_CustomScan;
		cpath->path.pathtarget = baserel->reltarget;
		cpath->path.parent = baserel;
		cpath->path.param_info = get_baserel_parampathinfo(root, baserel,
														   required_outer);
		cpath->path.parallel_aware = parallel_workers > 0 ? true : false;
		cpath->path.parallel_safe = baserel->consider_parallel;
		cpath->path.parallel_workers = parallel_workers;
		cpath->path.pathkeys = NIL;		/* always unordered */

		/* FIXME: real estimation */
		cost_seqscan(&cpath->path, root, baserel, cpath->path.param_info);

		/* HACK: force a lower cost */
		cpath->path.startup_cost = 0;
		cpath->path.total_cost = 0;

		add_path(baserel, &cpath->path);
	}

	/* calls secondary module if exists */
	if (set_rel_pathlist_next)
		set_rel_pathlist_next(root, baserel, rtindex, rte);
}

/*
 * PlanVectorScanPlan - A method of CustomPath; that populate a custom
 * object being delivered from CustomScan type, according to the supplied
 * CustomPath object.
 */
static Plan *
PlanVectorScanPath(PlannerInfo *root,
				   RelOptInfo *rel,
				   CustomPath *best_path,
				   List *tlist,
				   List *clauses,
				   List *custom_plans)
{
	CustomScan *cscan = makeNode(CustomScan);

	cscan->flags = best_path->flags;
	cscan->methods = &vectorscan_scan_methods;

	/* set scanrelid */
	cscan->scan.scanrelid = rel->relid;
	/* set targetlist as is  */
	cscan->scan.plan.targetlist = tlist;
	/* reduce RestrictInfo list to bare expressions */
	cscan->scan.plan.qual = extract_actual_clauses(clauses, false);
	cscan->scan.plan.lefttree = NULL;
	cscan->scan.plan.righttree = NULL;

	return &cscan->scan.plan;
}

/*
 * CreateVectorScanState - A method of CustomScan; that populate a custom
 * object being delivered from CustomScanState type, according to the
 * supplied CustomPath object.
 *
 * Derived from ExecInitSeqScanForPartition().
 */
static Node *
CreateVectorScanState(CustomScan *custom_plan)
{
	VectorScanState *vss = palloc0(sizeof(VectorScanState));

	NodeSetTag(vss, T_CustomScanState);
	vss->css.methods = &vectorscan_exec_methods;

	return (Node *) &vss->css;
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
ExecScanFetch(ScanState *node,
			  ExecScanAccessMtd accessMtd,
			  ExecScanRecheckMtd recheckMtd)
{
	EState	   *estate = node->ps.state;

	if (estate->es_epqTuple != NULL)
	{
		/*
		 * We are inside an EvalPlanQual recheck.  Return the test tuple if
		 * one is available, after rechecking any access-method-specific
		 * conditions.
		 */
		Index		scanrelid = ((Scan *) node->ps.plan)->scanrelid;

		if (scanrelid == 0)
		{
			TupleTableSlot *slot = node->ss_ScanTupleSlot;

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
			TupleTableSlot *slot = node->ss_ScanTupleSlot;

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
TupleTableSlot *
ExecVScan(ScanState *node,
		 ExecScanAccessMtd accessMtd,	/* function returning a tuple */
		 ExecScanRecheckMtd recheckMtd)
{
	ExprContext *econtext;
	List	   *qual;
	ProjectionInfo *projInfo;
	ExprDoneCond isDone;
	TupleTableSlot *resultSlot;

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
		return ExecScanFetch(node, accessMtd, recheckMtd);
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

		slot = ExecScanFetch(node, accessMtd, recheckMtd);

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
VectorScanAccess(CustomScanState *node)
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

	VectorScanState *vss = (VectorScanState *)node;
	
	/*
	 * get information from the estate and scan state
	 */
	scandesc = node->ss.ss_currentScanDesc;
	estate = node->ss.ps.state;
	direction = estate->es_direction;
	slot = node->ss.ss_ScanTupleSlot;
	natts = slot->tts_tupleDescriptor->natts;

	if (vss->scanFinish)
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
		scandesc = heap_beginscan(node->ss.ss_currentRelation,
								  estate->es_snapshot,
								  0, NULL);
		node->ss.ss_currentScanDesc = scandesc;
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
			vss->scanFinish = true;
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

/*
 * BeginVectorScan - A method of CustomScanState; that initializes
 * the supplied VectorScanState object, at beginning of the executor.
 *
 * Derived from InitScanRelation().
 */
static void
BeginVectorScan(CustomScanState *node, EState *estate, int eflags)
{
	VectorScanState *vss = (VectorScanState *) node;
	HeapScanDesc scandesc;
	
	/*
	 * TODO: Set TupleDesc correctly for vector node and non-vector node.
	 *
	 */
	{
		TupleDesc	tupdesc = node->ss.ps.ps_ResultTupleSlot->tts_tupleDescriptor;

		for (int i = 0; i < tupdesc->natts; i++)
		{
			Form_pg_attribute attr = tupdesc->attrs[i];
			Oid			vtypid = GetVtype(attr->atttypid);

			if (vtypid != InvalidOid)
				attr->atttypid = vtypid;
		}
	}
	{
		TupleDesc	tupdesc = node->ss.ss_ScanTupleSlot->tts_tupleDescriptor;

		for (int i = 0; i < tupdesc->natts; i++)
		{
			Form_pg_attribute attr = tupdesc->attrs[i];
			Oid			vtypid = GetVtype(attr->atttypid);

			if (vtypid != InvalidOid)
				attr->atttypid = vtypid;
		}
	}

	/* initialize a heapscan */

	/*
	 * get information from the estate and scan state
	 */
	scandesc = node->ss.ss_currentScanDesc;

	{
		/*
		 * We reach here if the scan is not parallel, or if we're serially
		 * executing a scan that was planned to be parallel.
		 */
		scandesc = heap_beginscan(node->ss.ss_currentRelation,
								  estate->es_snapshot,
								  0, NULL);
		node->ss.ss_currentScanDesc = scandesc;
	}

	vss->scanFinish = false;
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
	return ExecVScan(&node->ss,
					 (ExecScanAccessMtd) VectorScanAccess,
					 (ExecScanRecheckMtd) VectorScanRecheck);
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
	 * close heap scan
	 */

	scanDesc = node->ss.ss_currentScanDesc;

	if (scanDesc != NULL)
		heap_endscan(scanDesc);
}

/*
 * Initialize vectorscan CustomScan node.
 */
void
init_vectorscan(void)
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
	
	/* registration of the hook to add alternative path */
	set_rel_pathlist_next = set_rel_pathlist_hook;
	set_rel_pathlist_hook = SetVectorScanPath;
}

