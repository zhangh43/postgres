#include "vint.h"
#include "vtype.h"

PG_FUNCTION_INFO_V1(vint8inc_any);

Datum vint8inc_any(PG_FUNCTION_ARGS)
{
	/* Not called as an aggregate, so just do it the dumb way */
	int64		arg = PG_GETARG_INT64(0);
	vtype	   *batch = (vtype *) PG_GETARG_POINTER(1);
	int64		result;

	result = arg + batch->dim;
	/* Overflow check */
	if (result < 0 && arg > 0)
		ereport(ERROR,
				(errcode(ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE),
				 errmsg("bigint out of range")));

	PG_RETURN_INT64(result);
}
