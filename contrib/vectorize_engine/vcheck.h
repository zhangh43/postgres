#ifndef INCLUDE_UTILS_VCHECK_H_
#define INCLUDE_UTILS_VCHECK_H_


#include "vtype.h"
#include "nodes/execnodes.h"

extern void CheckAndReplacePlanVectorized(PlannedStmt *stmt);
extern Oid GetVtype(Oid ntype);

#endif /* INCLUDE_UTILS_VCHECK_H_ */
