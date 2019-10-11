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


typedef struct VectorConvertState VectorConvertState;
static Node *CreateVectorConvertState(CustomScan *custom_plan);

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

	/* Attributes for vectorization */
};

static void
BeginVectorConvert(CustomScanState *node, EState *estate, int eflags)
{
	VectorConvertState *vcs = (VectorConvertState*) node;
	CustomScan     *cscan = (CustomScan *) node->ss.ps.plan;

	outerPlanState(vcs) = ExecInitNode(outerPlan(cscan), estate, eflags);
	((PlanState*)vcs)->ps_ResultTupleSlot = outerPlanState(vcs)->ps_ResultTupleSlot;

}

/*
 *
 */
static TupleTableSlot *
ExecVectorConvert(CustomScanState *node)
{
	TupleTableSlot	   *slot;
	slot = ExecProcNode(node->ss.ps.lefttree);
	return slot;
}

/*
 *
 */
static void
EndVectorConvert(CustomScanState *node)
{
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
