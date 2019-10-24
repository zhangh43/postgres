#include "postgres.h"

#include "access/htup_details.h"
#include "access/nbtree.h"
#include "access/tupconvert.h"
#include "catalog/objectaccess.h"
#include "catalog/pg_type.h"
#include "executor/execdebug.h"
#include "executor/nodeSubplan.h"
#include "funcapi.h"
#include "miscadmin.h"
#include "nodes/makefuncs.h"
#include "nodes/nodeFuncs.h"
#include "optimizer/planner.h"
#include "parser/parse_coerce.h"
#include "parser/parsetree.h"
#include "pgstat.h"
#include "utils/acl.h"
#include "utils/builtins.h"
#include "utils/lsyscache.h"
#include "utils/memutils.h"
#include "utils/typcache.h"
#include "utils/xml.h"

#include "executor.h"
#include "vtype.h"
#include "execTuples.h"


/* ----------------------------------------------------------------
 *		ExecQual
 *
 *		Evaluates a conjunctive boolean expression (qual list) and
 *		returns true iff none of the subexpressions are false.
 *		(We also return true if the list is empty.)
 *
 *	If some of the subexpressions yield NULL but none yield FALSE,
 *	then the result of the conjunction is NULL (ie, unknown)
 *	according to three-valued boolean logic.  In this case,
 *	we return the value specified by the "resultForNull" parameter.
 *
 *	Callers evaluating WHERE clauses should pass resultForNull=FALSE,
 *	since SQL specifies that tuples with null WHERE results do not
 *	get selected.  On the other hand, callers evaluating constraint
 *	conditions should pass resultForNull=TRUE, since SQL also specifies
 *	that NULL constraint conditions are not failures.
 *
 *	NOTE: it would not be correct to use this routine to evaluate an
 *	AND subclause of a boolean expression; for that purpose, a NULL
 *	result must be returned as NULL so that it can be properly treated
 *	in the next higher operator (cf. ExecEvalAnd and ExecEvalOr).
 *	This routine is only used in contexts where a complete expression
 *	is being evaluated and we know that NULL can be treated the same
 *	as one boolean result or the other.
 *
 * ----------------------------------------------------------------
 */
bool
VExecScanQual(List *qual, ExprContext *econtext, bool resultForNull)
{
	MemoryContext	oldContext;
	TupleTableSlot	*slot;
	VectorTupleSlot	*vslot;
	ListCell		*l;
	int				natts;

	/*
	 * debugging stuff
	 */
	EV_printf("ExecQual: qual is ");
	EV_nodeDisplay(qual);
	EV_printf("\n");

	/*
	 * Run in short-lived per-tuple context while computing expressions.
	 */
	oldContext = MemoryContextSwitchTo(econtext->ecxt_per_tuple_memory);

	/*
	 * Evaluate the qual conditions one at a time.  If we find a FALSE result,
	 * we can stop evaluating and return FALSE --- the AND result must be
	 * FALSE.  Also, if we find a NULL result when resultForNull is FALSE, we
	 * can stop and return FALSE --- the AND result must be FALSE or NULL in
	 * that case, and the caller doesn't care which.
	 *
	 * If we get to the end of the list, we can return TRUE.  This will happen
	 * when the AND result is indeed TRUE, or when the AND result is NULL (one
	 * or more NULL subresult, with all the rest TRUE) and the caller has
	 * specified resultForNull = TRUE.
	 */

	slot = econtext->ecxt_scantuple;
	vslot = (VectorTupleSlot *)slot;
	natts = slot->tts_tupleDescriptor->natts;
	foreach(l, qual)
	{
		ExprState  *clause = (ExprState *) lfirst(l);
		Datum		expr_value;
		bool		isNull;
		vbool		*expr_val_bools;
		vtype		*column;
		int			dim, row, col;

		expr_value = ExecEvalExpr(clause, econtext, &isNull, NULL);
		
		expr_val_bools = (vbool *)DatumGetPointer(expr_value);
		
		dim = 0;
		for(row = 0; row < vslot->dim; row++)
		{
			if((!expr_val_bools->isnull[row] || !resultForNull) && 
				!DatumGetBool(expr_val_bools->values[row]))
				continue;
			
			/* row pass the qual */
			if(row == dim)
			{
				dim++;
				continue;
			}
			/* compress the tuple batch */
			for(col = 0; col < natts; col++)
			{
				column = (vtype *)DatumGetPointer(slot->tts_values[col]);
				column->values[dim] = column->values[row];
				column->isnull[dim] = column->isnull[row];
			}
			dim++;
		}
		/* reset dim for new compressed tuplebatch */
		for(col = 0; col < natts; col++)
		{
			column = (vtype *)DatumGetPointer(slot->tts_values[col]);
			column->dim = dim;
		}
		vslot->dim = dim;
	}

	MemoryContextSwitchTo(oldContext);

	return (vslot->dim != 0);
}

