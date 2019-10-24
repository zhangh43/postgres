#ifndef VECTOR_ENGINE_EXEC_TUPLE_H
#define VECTOR_ENGINE_EXEC_TUPLE_H

#include "postgres.h"

#include "executor/execdesc.h"
#include "nodes/parsenodes.h"
#include "executor/tuptable.h"
#include "storage/buf.h"
#include "vtype.h"

typedef struct VectorTupleSlot
{
	TupleTableSlot	tts;
	int32			dim;
	Buffer			tts_buffers[BATCHSIZE];	
} VectorTupleSlot;

extern TupleTableSlot *VExecClearTuple(TupleTableSlot *slot);
extern void VExecPinSlotBuffers(TupleTableSlot *slot, Buffer buffer, int idx);
/*
 * prototypes from functions in execTuples.c
 */
extern void VExecInitResultTupleSlot(EState *estate, PlanState *planstate);
extern void VExecInitScanTupleSlot(EState *estate, ScanState *scanstate);

#endif
