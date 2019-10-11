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

#include "vector_engine.h"
#include "vcheck.h"
#include "vconvert.h"
#include "v_scan.h"

PG_MODULE_MAGIC;

static planner_hook_type    planner_hook_next;

static PlannedStmt *
vector_post_planner(Query *parse,
                      int cursorOptions,
                      ParamListInfo boundParams)
{
    PlannedStmt *stmt;

    if (planner_hook_next)
        stmt = planner_hook_next(parse, cursorOptions, boundParams);
    else
        stmt = standard_planner(parse, cursorOptions, boundParams);

    CheckAndReplacePlanVectorized(stmt);

	AddConvertNodeAtTop(stmt);
    return stmt;
}

void
_PG_init(void)
{
	init_vectorscan();
	init_vector_convert();

    /* planner hook registration */
    planner_hook_next = planner_hook;
    planner_hook = vector_post_planner;
}
