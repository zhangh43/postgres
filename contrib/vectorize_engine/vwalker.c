
#include "postgres.h"

#include "catalog/pg_collation.h"
#include "miscadmin.h"
#include "nodes/nodeFuncs.h"
#include "optimizer/var.h"

#include "vwalkers.h"

static bool walk_scan_node_fields(Scan *scan, bool (*walker) (), void *context);
static bool walk_join_node_fields(Join *join, bool (*walker) (), void *context);


/* ----------------------------------------------------------------------- *
 * Plan Tree Walker Framework
 * ----------------------------------------------------------------------- *
 */

/* Function walk_plan_node_fields is a subroutine used by plan_tree_walker()
 * to walk the fields of Plan nodes.  Plan is actually an abstract superclass
 * of all plan nodes and this function encapsulates the common structure.
 *
 * Most specific walkers won't need to call this function, but complicated
 * ones may find it a useful utility.
 *
 * Caution: walk_scan_node_fields and walk_join_node_fields call this
 * function.  Use only the most specific function.
 */
bool
walk_plan_node_fields(Plan *plan,
					  bool (*walker) (),
					  void *context)
{
	/* target list to be computed at this node */
	if (walker((Node *) (plan->targetlist), context))
		return true;

	/* implicitly ANDed qual conditions */
	if (walker((Node *) (plan->qual), context))
		return true;

	/* input plan tree(s) */
	if (walker((Node *) (plan->lefttree), context))
		return true;

	/* target list to be computed at this node */
	if (walker((Node *) (plan->righttree), context))
		return true;

	/* Init Plan nodes (uncorrelated expr subselects */
	if (walker((Node *) (plan->initPlan), context))
		return true;

	return false;
}


/* Function walk_scan_node_fields is a subroutine used by plan_tree_walker()
 * to walk the fields of Scan nodes.  Scan is actually an abstract superclass
 * of all scan nodes and a subclass of Plan.  This function encapsulates the
 * common structure.
 *
 * Most specific walkers won't need to call this function, but complicated
 * ones may find it a useful utility.
 *
 * Caution: This function calls walk_plan_node_fields so callers shouldn't,
 * else they will walk common plan fields twice.
 */
bool
walk_scan_node_fields(Scan *scan,
					  bool (*walker) (),
					  void *context)
{
	/* A Scan node is a kind of Plan node. */
	if (walk_plan_node_fields((Plan *) scan, walker, context))
		return true;

	/* The only additional field is an Index so no extra walking. */
	return false;
}


/* Function walk_join_node_fields is a subroutine used by plan_tree_walker()
 * to walk the fields of Join nodes.  Join is actually an abstract superclass
 * of all join nodes and a subclass of Plan.  This function encapsulates the
 * common structure.
 *
 * Most specific walkers won't need to call this function, but complicated
 * ones may find it a useful utility.
 *
 * Caution: This function calls walk_plan_node_fields so callers shouldn't,
 * else they will walk common plan fields twice.
 */
bool
walk_join_node_fields(Join *join,
					  bool (*walker) (),
					  void *context)
{
	/* A Join node is a kind of Plan node. */
	if (walk_plan_node_fields((Plan *) join, walker, context))
		return true;

	return walker((Node *) (join->joinqual), context);
}


/* Function plan_tree_walker is a general walker for Plan trees.
 *
 * It is based on (and uses) the expression_tree_walker() framework from
 * src/backend/optimizer/util/clauses.c.  See the comments there for more
 * insight into how this function works.
 *
 * The basic idea is that this function (and its helpers) walk plan-specific
 * nodes and delegate other nodes to expression_tree_walker().	The caller
 * may supply a specialized walker
 */
bool
plan_tree_walker(Node *node,
				 bool (*walker) (),
				 void *context)
{
	/*
	 * The walker has already visited the current node, and so we need
	 * only recurse into any sub-nodes it has.
	 *
	 * We assume that the walker is not interested in List nodes per se, so
	 * when we expect a List we just recurse directly to self without
	 * bothering to call the walker.
	 */
	if (node == NULL)
		return false;

	/* Guard against stack overflow due to overly complex expressions */
	check_stack_depth();

	switch (nodeTag(node))
	{
			/*
			 * Plan nodes aren't handled by expression_tree_walker, so we need
			 * to do them here.
			 */
		case T_Plan:
			/* Abstract: really should see only subclasses. */
			return walk_plan_node_fields((Plan *) node, walker, context);

		case T_Result:
			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;
			if (walker((Node *) ((Result *) node)->resconstantqual, context))
				return true;
			break;

		case T_Append:
			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;
			if (walker((Node *) ((Append *) node)->appendplans, context))
				return true;
			break;

		case T_MergeAppend:
			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;
			if (walker((Node *) ((MergeAppend *) node)->mergeplans, context))
				return true;
			break;

		case T_RecursiveUnion:
			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;
			break;

		case T_BitmapAnd:
            if (walk_plan_node_fields((Plan *) node, walker, context))
                return true;
            if (walker((Node *) ((BitmapAnd *) node)->bitmapplans, context))
                return true;
            break;
        case T_BitmapOr:
            if (walk_plan_node_fields((Plan *) node, walker, context))
                return true;
            if (walker((Node *) ((BitmapOr *) node)->bitmapplans, context))
                return true;
            break;

		case T_Scan:
			/* Abstract: really should see only subclasses. */
			return walk_scan_node_fields((Scan *) node, walker, context);

		case T_SeqScan:
		case T_SampleScan:
		case T_BitmapHeapScan:
		case T_WorkTableScan:
			if (walk_scan_node_fields((Scan *) node, walker, context))
				return true;
			break;

		case T_ForeignScan:
			if (walk_scan_node_fields((Scan *) node, walker, context))
				return true;
			if (walker(((ForeignScan *) node)->fdw_exprs, context))
				return true;
			break;

		case T_ValuesScan:
			if (walker((Node *) ((ValuesScan *) node)->values_lists, context))
				return true;
			if (walk_scan_node_fields((Scan *) node, walker, context))
				return true;
			break;

		case T_FunctionScan:
			if (walker((Node *) ((FunctionScan *) node)->functions, context))
				return true;
			if (walk_scan_node_fields((Scan *) node, walker, context))
				return true;
			break;

		case T_IndexScan:
			if (walk_scan_node_fields((Scan *) node, walker, context))
				return true;
			if (walker((Node *) ((IndexScan *) node)->indexqual, context))
				return true;
			/* Other fields are lists of basic items, nothing to walk. */
			break;

		case T_IndexOnlyScan:
			if (walk_scan_node_fields((Scan *) node, walker, context))
				return true;
			if (walker((Node *) ((IndexOnlyScan *) node)->indexqual, context))
				return true;
			break;

		case T_BitmapIndexScan:
		case T_DynamicBitmapIndexScan:
			if (walk_scan_node_fields((Scan *) node, walker, context))
				return true;
			if (walker((Node *) ((BitmapIndexScan *) node)->indexqual, context))
				return true;
			/* Other fields are lists of basic items, nothing to walk. */
			break;

		case T_TidScan:
			if (walk_scan_node_fields((Scan *) node, walker, context))
				return true;
			if (walker((Node *) ((TidScan *) node)->tidquals, context))
				return true;
			break;

		case T_SubqueryScan:
			if (walk_scan_node_fields((Scan *) node, walker, context))
				return true;
			if (walker((Node *) ((SubqueryScan *) node)->subplan, context))
				return true;
			break;

		case T_Join:
			/* Abstract: really should see only subclasses. */
			return walk_join_node_fields((Join *) node, walker, context);

		case T_NestLoop:
			if (walk_join_node_fields((Join *) node, walker, context))
				return true;
			break;

		case T_MergeJoin:
			if (walk_join_node_fields((Join *) node, walker, context))
				return true;
			if (walker((Node *) ((MergeJoin *) node)->mergeclauses, context))
				return true;
			break;

		case T_HashJoin:
			if (walk_join_node_fields((Join *) node, walker, context))
				return true;
			if (walker((Node *) ((HashJoin *) node)->hashclauses, context))
				return true;
			break;

		case T_Material:
			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;
			break;

		case T_Sort:
			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;
			/* Other fields are simple counts and lists of indexes and oids. */
			break;

		case T_Agg:
			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;
			/* Other fields are simple items and lists of simple items. */
			break;

		case T_WindowAgg:
			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;
			if (walker(((WindowAgg *) node)->startOffset, context))
				return true;
			if (walker(((WindowAgg *) node)->endOffset, context))
				return true;
			break;

		case T_Unique:
			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;
			/* Other fields are simple items and lists of simple items. */
			break;

		case T_Hash:
			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;
			/* Other info is in parent HashJoin node. */
			break;

		case T_SetOp:
			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;
			/* Other fields are simple items and lists of simple items. */
			break;

		case T_Limit:

			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;

			/* Greenplum Database Limit Count */
			if (walker((Node *) (((Limit*) node)->limitCount), context))
					return true;

			/* Greenplum Database Limit Offset */
			if (walker((Node *) (((Limit*) node)->limitOffset), context))
					return true;

			/* Other fields are simple items and lists of simple items. */
			break;

		case T_CteScan:
			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;
			break;

		case T_SubPlan:

			/*
			 * SubPlan is handled by expression_tree_walker() , but that
			 * walker doesn't recur into the plan itself.  Here, we do so
			 * by using information in the prefix structure defined in
			 * cdbplan.h.
			 *
			 * NB Callers usually don't have to take special account of
			 *    the range table, but should be sure to understand what
			 *    stage of processing they occur in (e.g., early planning,
			 *    late planning, dispatch, or execution) since this affects
			 *    what value are available.
			 */
			{
				SubPlan    *subplan = (SubPlan *) node;
				Plan	   *subplan_plan = plan_tree_base_subplan_get_plan(context, subplan);

				Assert(subplan_plan);

				/* recurse into the exprs list */
				if (expression_tree_walker((Node *) subplan->testexpr,
										   walker, context))
					return true;

				/* recur into the subplan's plan, a kind of Plan node */
				if (walker((Node *) subplan_plan, context))
					return true;

				/* also examine args list */
				if (expression_tree_walker((Node *) subplan->args,
										   walker, context))
					return true;
			}
			break;

		case T_IntList:
		case T_OidList:

			/*
			 * Note that expression_tree_walker handles T_List but not these.
			 * No contained stuff, so just succeed.
			 */
			break;

		case T_ModifyTable:
			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;
			if (walker((Node *) ((ModifyTable *) node)->plans, context))
				return true;
			if (walker((Node *) ((ModifyTable *) node)->withCheckOptionLists, context))
				return true;
			if (walker((Node *) ((ModifyTable *) node)->onConflictSet, context))
				return true;
			if (walker((Node *) ((ModifyTable *) node)->onConflictWhere, context))
				return true;

			break;

		case T_LockRows:
			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;
			break;

		case T_DML:
		case T_SplitUpdate:
		case T_RowTrigger:
		case T_AssertOp:
			if (walk_plan_node_fields((Plan *) node, walker, context))
				return true;
			break;

			/*
			 * Query nodes are handled by the Postgres query_tree_walker. We
			 * just use it without setting any ignore flags.  The caller must
			 * handle query nodes specially to get other behavior, e.g. by
			 * calling query_tree_walker directly.
			 */
		case T_Query:
			return query_tree_walker((Query *) node, walker, context, 0);

			/*
			 * The following cases are handled by expression_tree_walker.  In
			 * addition, we let expression_tree_walker handle unrecognized
			 * nodes.
			 *
			 * TODO: Identify node types that should never appear in plan trees
			 * and disallow them here by issuing an error or asserting false.
			 */
		case T_Var:
		case T_Const:
		case T_Param:
		case T_CoerceToDomainValue:
		case T_CaseTestExpr:
		case T_SetToDefault:
		case T_CurrentOfExpr:
		case T_RangeTblRef:
		case T_Aggref:
		case T_ArrayRef:
		case T_FuncExpr:
		case T_OpExpr:
		case T_DistinctExpr:
		case T_ScalarArrayOpExpr:
		case T_BoolExpr:
		case T_SubLink:
		case T_FieldSelect:
		case T_FieldStore:
		case T_RelabelType:
		case T_CaseExpr:
		case T_ArrayExpr:
		case T_RowExpr:
		case T_CoalesceExpr:
		case T_NullIfExpr:
		case T_NullTest:
		case T_BooleanTest:
		case T_CoerceToDomain:
		case T_TargetEntry:
		case T_List:
		case T_FromExpr:
		case T_JoinExpr:
		case T_SetOperationStmt:
		case T_SpecialJoinInfo:
		case T_TableValueExpr:
		case T_PartSelectedExpr:
		case T_PartDefaultExpr:
		case T_PartBoundExpr:
		case T_PartBoundInclusionExpr:
		case T_PartBoundOpenExpr:
		case T_PartListRuleExpr:
		case T_PartListNullTestExpr:

		default:
			return expression_tree_walker(node, walker, context);
	}
	return false;
}
