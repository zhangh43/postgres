#ifndef UTILS_H
#define UTILS_H

#include "access/tupdesc.h"

extern Oid GetVtype(Oid ntype);
extern Oid GetNtype(Oid vtype);
extern Oid GetTupDescAttVType(TupleDesc tupdesc, int i);

#endif
