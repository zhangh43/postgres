#ifndef VECTOR_ENGINE_EXECUTOR_H
#define VECTOR_ENGINE_EXECUTOR_H

#include "postgres.h"
#include "executor/execdesc.h"
#include "nodes/parsenodes.h"

extern bool VExecScanQual(List *qual, ExprContext *econtext, bool resultForNull);
/*
 * prototypes from functions in execScan.c
 */
typedef TupleTableSlot *(*VExecScanAccessMtd) (CustomScanState *node);
typedef bool (*VExecScanRecheckMtd) (CustomScanState *node, TupleTableSlot *slot);

TupleTableSlot *
VExecScan(CustomScanState *css, VExecScanAccessMtd accessMtd,
			VExecScanRecheckMtd recheckMtd);
#endif
