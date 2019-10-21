/*-------------------------------------------------------------------------
 *
 * gpvector.c
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
#include "nodeScan.h"
#include "plan.h"

PG_MODULE_MAGIC;

static planner_hook_type    planner_hook_next;

static PlannedStmt *
vector_post_planner(Query	*parse,
					int		cursorOptions,
					ParamListInfo	boundParams)
{
	PlannedStmt	*stmt;
	Plan		*savedPlanTree;
	List		*savedSubplan;

	if (planner_hook_next)
		stmt = planner_hook_next(parse, cursorOptions, boundParams);
	else
		stmt = standard_planner(parse, cursorOptions, boundParams);

	savedPlanTree = stmt->planTree;
	savedSubplan = stmt->subplans;

	PG_TRY();
	{
		List		*subplans = NULL;
		ListCell	*cell;

		stmt->planTree = ReplacePlanNodeWalker((Node *) stmt->planTree);

		foreach(cell, stmt->subplans)
		{
			Plan	*subplan = ReplacePlanNodeWalker((Node *)lfirst(cell));
			subplans = lappend(subplans, subplan);
		}
		stmt->subplans = subplans;

		stmt->planTree = AddUnbatchNodeAtTop(stmt->planTree);
	}
	PG_CATCH();
	{
		FlushErrorState();
		stmt->planTree = savedPlanTree;
		stmt->subplans = savedSubplan;
	}
	PG_END_TRY();

    return stmt;
}

void
_PG_init(void)
{
	InitVectorScan();
	InitUnbatch();

    /* planner hook registration */
    planner_hook_next = planner_hook;
    planner_hook = vector_post_planner;
}
