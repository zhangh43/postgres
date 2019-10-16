#include "postgres.h"
#include "access/htup.h"
#include "catalog/pg_collation.h"
#include "catalog/pg_operator.h"
#include "miscadmin.h"
#include "access/htup_details.h"
#include "nodes/nodeFuncs.h"
#include "optimizer/var.h"
#include "parser/parse_oper.h"
#include "nodes/makefuncs.h"
#include "nodes/nodeFuncs.h"
#include "nodes/primnodes.h"
#include "nodes/plannodes.h"
#include "nodes/relation.h"
#include "nodes/nodes.h"
#include "nodes/parsenodes.h"
#include "utils/lsyscache.h"
#include "utils/syscache.h"

#include "plan.h"
#include "nodeScan.h"
#include "utils.h"

static void mutate_plan_fields(Plan *newplan, Plan *oldplan, Node *(*mutator) (), void *context);
static Node * plan_tree_mutator(Node *node, Node *(*mutator) (), void *context);

/*
 * We check the expressions tree recursively becuase the args can be a sub expression,
 * we must check the return type of sub expression to fit the parent expressions.
 * so the retType in Vectorized is a temporary values, after we check on expression,
 * we set the retType of this expression, and transfer this value to his parent.
 */
typedef struct VectorizedContext
{
	Oid			retType;
}VectorizedContext;

static Oid getNodeReturnType(Node *node);


static Oid
getNodeReturnType(Node *node)
{
	switch(nodeTag(node))
	{
		case T_Var:
			return ((Var*)node)->vartype;
		case T_Const:
			return ((Const*)node)->consttype;
		default:
			elog(ERROR, "Operator arguments cannot be vectorized");
	}
}

/*
 * Check all the expressions if they can be vectorized
 * NOTE: if an expressions is vectorized, we return false...,because we should check
 * all the expressions in the Plan node, if we return true, then the walker will be
 * over...
 */
static Node*
VectorizeMutator(Node *node, VectorizedContext *ctx)
{
	if(NULL == node)
		return NULL;

	//check the type of Var if it can be vectorized
	switch (nodeTag(node))
	{
		case T_Var:
			{
				Var *newnode;
				Oid vtype;

				newnode = (Var*)plan_tree_mutator(node, VectorizeMutator, ctx);
				vtype = GetVtype(newnode->vartype);
				if(InvalidOid == vtype)
					elog(ERROR, "Operator arguments cannot be vectorized");
				newnode->vartype = vtype;
				return (Node *)newnode;
			}

		case T_OpExpr:
			{
				OpExpr	*newnode;
				Oid		ltype, rtype, rettype;
				Form_pg_operator	voper;
				HeapTuple			tuple;

				/* mutate OpExpr itself in plan_tree_mutator firstly. */
				newnode = (OpExpr*)plan_tree_mutator(node, VectorizeMutator, ctx);
				rettype = GetVtype(newnode->opresulttype);
				if (InvalidOid == rettype)
					elog(ERROR, "Operator arguments cannot be vectorized");

				if (list_length(newnode->args) != 2)
					elog(ERROR, "Operator arguments cannot be vectorized");
				ltype = getNodeReturnType(linitial(newnode->args));
				rtype = getNodeReturnType(lsecond(newnode->args));

				//get the vectorized operator functions
				tuple = oper(NULL, list_make1(makeString(get_opname(newnode->opno))),
						ltype, rtype, true, -1);
				if(NULL == tuple)
					elog(ERROR, "Operator arguments cannot be vectorized");

				voper = (Form_pg_operator)GETSTRUCT(tuple);
				if(voper->oprresult != rettype)
				{
					ReleaseSysCache(tuple);
					elog(ERROR, "Operator arguments cannot be vectorized");
				}

				newnode->opresulttype = rettype;
				newnode->opfuncid = voper->oprcode;

				ReleaseSysCache(tuple);
				return (Node *)newnode;
			}

		default:
			return plan_tree_mutator(node, VectorizeMutator, ctx);
	}
}


static Node *
plan_tree_mutator(Node *node,
				  Node *(*mutator) (),
				  void *context)
{
	/*
	 * The mutator has already decided not to modify the current node, but we
	 * must call the mutator for any sub-nodes.
	 */
#define FLATCOPY(newnode, node, nodetype)  \
	( (newnode) = makeNode(nodetype), \
	  memcpy((newnode), (node), sizeof(nodetype)) )

#define CHECKFLATCOPY(newnode, node, nodetype)	\
	( AssertMacro(IsA((node), nodetype)), \
	  (newnode) = makeNode(nodetype), \
	  memcpy((newnode), (node), sizeof(nodetype)) )

#define MUTATE(newfield, oldfield, fieldtype)  \
		( (newfield) = (fieldtype) mutator((Node *) (oldfield), context) )

#define PLANMUTATE(newplan, oldplan) \
		mutate_plan_fields((Plan*)(newplan), (Plan*)(oldplan), mutator, context)

/* This is just like  PLANMUTATE because Scan adds only scalar fields. */
#define SCANMUTATE(newplan, oldplan) \
		mutate_plan_fields((Plan*)(newplan), (Plan*)(oldplan), mutator, context)

#define JOINMUTATE(newplan, oldplan) \
		mutate_join_fields((Join*)(newplan), (Join*)(oldplan), mutator, context)

#define COPYARRAY(dest,src,lenfld,datfld) \
	do { \
		(dest)->lenfld = (src)->lenfld; \
		if ( (src)->lenfld > 0  && \
             (src)->datfld != NULL) \
		{ \
			Size _size = ((src)->lenfld*sizeof(*((src)->datfld))); \
			(dest)->datfld = palloc(_size); \
			memcpy((dest)->datfld, (src)->datfld, _size); \
		} \
		else \
		{ \
			(dest)->datfld = NULL; \
		} \
	} while (0)


	if (node == NULL)
		return NULL;

	/* Guard against stack overflow due to overly complex expressions */
	check_stack_depth();

	switch (nodeTag(node))
	{
		case T_SeqScan:
			{
				CustomScan	*cscan;
				VSeqScan	*vscan;

				cscan = MakeCustomScanForSeqScan();
				FLATCOPY(vscan, node, SeqScan);
				cscan->custom_plans = lappend(cscan->custom_plans, vscan);

				SCANMUTATE(vscan, node);
				return (Node *)cscan;
			}

		case T_Const:
			{
				Const	   *oldnode = (Const *) node;
				Const	   *newnode;

				FLATCOPY(newnode, oldnode, Const);
				return (Node *) newnode;
			}

		case T_Var:
		{
			Var		   *var = (Var *)node;
			Var		   *newnode;

			FLATCOPY(newnode, var, Var);
			return (Node *)newnode;
		}

		case T_OpExpr:
			{
				OpExpr	   *expr = (OpExpr *)node;
				OpExpr	   *newnode;

				FLATCOPY(newnode, expr, OpExpr);
				MUTATE(newnode->args, expr->args, List *);
				return (Node *)newnode;
			}

		case T_List:
			{
				/*
				 * We assume the mutator isn't interested in the list nodes
				 * per se, so just invoke it on each list element. NOTE: this
				 * would fail badly on a list with integer elements!
				 */
				List	   *resultlist;
				ListCell   *temp;

				resultlist = NIL;
				foreach(temp, (List *) node)
				{
					resultlist = lappend(resultlist,
										 mutator((Node *) lfirst(temp),
												 context));
				}
				return (Node *) resultlist;
			}

		case T_TargetEntry:
			{
				TargetEntry *targetentry = (TargetEntry *) node;
				TargetEntry *newnode;

				FLATCOPY(newnode, targetentry, TargetEntry);
				MUTATE(newnode->expr, targetentry->expr, Expr *);
				return (Node *) newnode;
			}

		default:
			elog(ERROR, "node type cannot be vectorized: %d", nodeTag(node));
			break;
	}
}

/* Function mutate_plan_fields() is a subroutine for plan_tree_mutator().
 * It "hijacks" the macro MUTATE defined for use in that function, so don't
 * change the argument names "mutator" and "context" use in the macro
 * definition.
 *
 */
static void
mutate_plan_fields(Plan *newplan, Plan *oldplan, Node *(*mutator) (), void *context)
{
	/*
	 * Scalar fields startup_cost total_cost plan_rows plan_width nParamExec
	 * need no mutation.
	 */

	/* Node fields need mutation. */
	MUTATE(newplan->targetlist, oldplan->targetlist, List *);
	MUTATE(newplan->qual, oldplan->qual, List *);
	MUTATE(newplan->lefttree, oldplan->lefttree, Plan *);
	MUTATE(newplan->righttree, oldplan->righttree, Plan *);
	MUTATE(newplan->initPlan, oldplan->initPlan, List *);

	/* Bitmapsets aren't nodes but need to be copied to palloc'd space. */
	newplan->extParam = bms_copy(oldplan->extParam);
	newplan->allParam = bms_copy(oldplan->allParam);
}

/*
 * Replace the non-vectorirzed type to vectorized type
 */
Plan* 
ReplacePlanNodeWalker(Node *node)
{
	return (Plan *)plan_tree_mutator(node, VectorizeMutator, NULL);
}
