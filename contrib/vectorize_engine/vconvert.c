/*-------------------------------------------------------------------------
 *
 * vectorconvert.c
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

#include "vector_engine.h"
#include "vcheck.h"
#include "vconvert.h"
#include "vtype.h"


typedef struct VectorConvertState VectorConvertState;
static Node *CreateVectorConvertState(CustomScan *custom_plan);
static bool FetchRowFromBatch(TupleTableSlot *vslot, TupleTableSlot *slot);
static int iter = 0;

static CustomScanMethods	vectorconvert_methods = {
	"vectorconvert",			/* CustomName */
	CreateVectorConvertState,	/* CreateCustomScanState */
};


/* CustomScanExecMethods */
static void BeginVectorConvert(CustomScanState *node, EState *estate, int eflags);
static TupleTableSlot *ExecVectorConvert(CustomScanState *node);
static void EndVectorConvert(CustomScanState *node);

static CustomExecMethods	vectorconvert_exec_methods = {
	"vectorconvert",			/* CustomName */
	BeginVectorConvert,		/* BeginCustomScan */
	ExecVectorConvert,			/* ExecCustomScan */
	EndVectorConvert,			/* EndCustomScan */
	NULL,					/* ReScanCustomScan */
	NULL,					/* MarkPosCustomScan */
	NULL,					/* RestrPosCustomScan */
	NULL,					/* EstimateDSMCustomScan */
	NULL,					/* InitializeDSMCustomScan */
	NULL,					/* InitializeWorkerCustomScan */
	NULL,					/* ExplainCustomScan */
};

/*
 * VectorConvertState - state object of vectorscan on executor.
 */
struct VectorConvertState
{
	CustomScanState	css;

	TupleTableSlot *ps_ResultTupleSlot; /* slot for my result tuples */
	TupleTableSlot *ps_ResultVTupleSlot; /* slot for my result tuples */

	/* Attributes for vectorization */
};

static void
BeginVectorConvert(CustomScanState *node, EState *estate, int eflags)
{
	VectorConvertState *vcs = (VectorConvertState*) node;
	CustomScan     *cscan = (CustomScan *) node->ss.ps.plan;

	outerPlanState(vcs) = ExecInitNode(outerPlan(cscan), estate, eflags);
	
	((PlanState*)vcs)->ps_ResultTupleSlot->tts_tupleDescriptor = CreateTupleDescCopy(outerPlanState(vcs)->ps_ResultTupleSlot->tts_tupleDescriptor);

	/* Convert Vtype in tupdesc to Ntype in Convert Node */
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
ExecVectorConvert(CustomScanState *node)
{
	VectorConvertState *vcs = (VectorConvertState*) node;
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
EndVectorConvert(CustomScanState *node)
{
	PlanState  *outerPlan;
	outerPlan = outerPlanState(node);
	ExecEndNode(outerPlan);
}


static Node *
CreateVectorConvertState(CustomScan *custom_plan)
{
	VectorConvertState *vss = palloc0(sizeof(VectorConvertState));

	NodeSetTag(vss, T_CustomScanState);
	vss->css.methods = &vectorconvert_exec_methods;

	return (Node *) &vss->css;
}


void AddConvertNodeAtTop(PlannedStmt *stmt)
{
	/* Add Convert Node at top to make batch to tuple */
    CustomScan *convert = makeNode(CustomScan);

    convert->methods = &vectorconvert_methods;

	convert->scan.plan.lefttree = stmt->planTree;
    convert->scan.plan.righttree = NULL;
	stmt->planTree = &convert->scan.plan;
}

/*
 * Initialize vectorscan CustomScan node.
 */
void
init_vector_convert(void)
{

    /* Register a vscan type of custom scan node */
    RegisterCustomScanMethods(&vectorconvert_methods);

}
