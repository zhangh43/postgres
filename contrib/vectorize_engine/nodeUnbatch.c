/*-------------------------------------------------------------------------
 *
 * unbatch.c
 *	  TODO file description
 *
 *
 * Copyright (c) 2019-Present Pivotal Software, Inc.
 *
 *
 *-------------------------------------------------------------------------
 */

#include "postgres.h"

#include "fmgr.h"
#include "optimizer/planner.h"
#include "executor/nodeCustom.h"

#include "vectorEngine.h"
#include "nodeUnbatch.h"
#include "vtype.h"
#include "utils.h"


/*
 * UnbatchState - state object of vectorscan on executor.
 */
typedef struct UnbatchState
{
	CustomScanState	css;

	TupleTableSlot *ps_ResultTupleSlot; /* slot for my result tuples */
	TupleTableSlot *ps_ResultVTupleSlot; /* slot for my result tuples */

	/* Attributes for vectorization */
} UnbatchState;

static Node *CreateUnbatchState(CustomScan *custom_plan);
static bool FetchRowFromBatch(TupleTableSlot *vslot, TupleTableSlot *slot);
/* CustomScanExecMethods */
static void BeginUnbatch(CustomScanState *node, EState *estate, int eflags);
static TupleTableSlot *ExecUnbatch(CustomScanState *node);
static void EndUnbatch(CustomScanState *node);

static CustomScanMethods	unbatch_methods = {
	"unbatch",			/* CustomName */
	CreateUnbatchState,	/* CreateCustomScanState */
};

static CustomExecMethods	unbatch_exec_methods = {
	"unbatch",			/* CustomName */
	BeginUnbatch,		/* BeginCustomScan */
	ExecUnbatch,			/* ExecCustomScan */
	EndUnbatch,			/* EndCustomScan */
	NULL,					/* ReScanCustomScan */
	NULL,					/* MarkPosCustomScan */
	NULL,					/* RestrPosCustomScan */
	NULL,					/* EstimateDSMCustomScan */
	NULL,					/* InitializeDSMCustomScan */
	NULL,					/* InitializeWorkerCustomScan */
	NULL,					/* ExplainCustomScan */
};

static int iter = 0;


static void
BeginUnbatch(CustomScanState *node, EState *estate, int eflags)
{
	UnbatchState *vcs = (UnbatchState*) node;
	CustomScan     *cscan = (CustomScan *) node->ss.ps.plan;

	outerPlanState(vcs) = ExecInitNode(outerPlan(cscan), estate, eflags);
	
	((PlanState*)vcs)->ps_ResultTupleSlot->tts_tupleDescriptor = CreateTupleDescCopy(outerPlanState(vcs)->ps_ResultTupleSlot->tts_tupleDescriptor);

	/* Convert Vtype in tupdesc to Ntype in unbatch Node */
    {
        TupleDesc   tupdesc = node->ss.ps.ps_ResultTupleSlot->tts_tupleDescriptor;

        for (int i = 0; i < tupdesc->natts; i++)
        {
            Form_pg_attribute attr = tupdesc->attrs[i];
            Oid         typid = GetNtype(attr->atttypid);
            if (typid != InvalidOid)
                attr->atttypid = typid;
        }
		ExecSetSlotDescriptor(((PlanState*)vcs)->ps_ResultTupleSlot, tupdesc);
    }


	vcs->ps_ResultVTupleSlot = ExecInitExtraTupleSlot(estate);
	vcs->ps_ResultVTupleSlot->tts_tupleDescriptor = CreateTupleDescCopy(outerPlanState(vcs)->ps_ResultTupleSlot->tts_tupleDescriptor);


}

static bool
FetchRowFromBatch(TupleTableSlot *vslot, TupleTableSlot *slot){
	int		natts;
	
	natts = vslot->tts_tupleDescriptor->natts;

	if (natts <= 0)
		return false;

	ExecStoreVirtualTuple(slot);
	
	/* we have checked that natts is greater than zero */
	if( iter >= ((vtype*)vslot->tts_values[0])->dim )
	{
		iter = 0;
		return false;
	}

	for(int i = 0;i < natts;i ++)
	{
		slot->tts_values[i] = ((vtype*)vslot->tts_values[i])->values[iter];
		slot->tts_isnull[i] = false;
	}

	if(++iter == BATCHSIZE)
	{
		iter = 0;
	}
	return true;
}

/*
 *
 */
static TupleTableSlot *
ExecUnbatch(CustomScanState *node)
{
	UnbatchState *vcs = (UnbatchState*) node;
	TupleTableSlot	   *slot =  ((PlanState*)vcs)->ps_ResultTupleSlot;
	TupleTableSlot	   *vslot = vcs->ps_ResultVTupleSlot;

	while(true)
	{
		if(iter == 0)
		{
			vslot = ExecProcNode(node->ss.ps.lefttree);
			vcs->ps_ResultVTupleSlot = vslot;
			if(TupIsNull(vslot))
			{
				slot = vslot;
				break;
			}
			/* Make sure the tuple is fully deconstructed */
			slot_getallattrs(vslot);
		}
		if(FetchRowFromBatch(vslot, slot))
			break;
	}
	return slot;
}

/*
 *
 */
static void
EndUnbatch(CustomScanState *node)
{
	PlanState  *outerPlan;
	outerPlan = outerPlanState(node);
	ExecEndNode(outerPlan);
}


static Node *
CreateUnbatchState(CustomScan *custom_plan)
{
	UnbatchState *vss = palloc0(sizeof(UnbatchState));

	NodeSetTag(vss, T_CustomScanState);
	vss->css.methods = &unbatch_exec_methods;

	return (Node *) &vss->css;
}


/*
 * Add unbatch Node at top to make batch to tuple
 */
Plan *
AddUnbatchNodeAtTop(Plan *node)
{
    CustomScan *convert = makeNode(CustomScan);
    convert->methods = &unbatch_methods;
	convert->scan.plan.lefttree = node;
    convert->scan.plan.righttree = NULL;
	return &convert->scan.plan;
}

/*
 * Initialize vectorscan CustomScan node.
 */
void
InitUnbatch(void)
{
    RegisterCustomScanMethods(&unbatch_methods);
}
