/*-------------------------------------------------------------------------
 *
 * execTuples.c
 *	  Routines dealing with TupleTableSlots.  These are used for resource
 *	  management associated with tuples (eg, releasing buffer pins for
 *	  tuples in disk buffers, or freeing the memory occupied by transient
 *	  tuples).  Slots also provide access abstraction that lets us implement
 *	  "virtual" tuples to reduce data-copying overhead.
 *
 *	  Routines dealing with the type information for tuples. Currently,
 *	  the type information for a tuple is an array of FormData_pg_attribute.
 *	  This information is needed by routines manipulating tuples
 *	  (getattribute, formtuple, etc.).
 *
 * Portions Copyright (c) 1996-2016, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *
 * IDENTIFICATION
 *	  src/backend/executor/execTuples.c
 *
 *-------------------------------------------------------------------------
 */
/*
 * INTERFACE ROUTINES
 *
 *	 SLOT CREATION/DESTRUCTION
 *		MakeTupleTableSlot		- create an empty slot
 *		ExecAllocTableSlot		- create a slot within a tuple table
 *		ExecResetTupleTable		- clear and optionally delete a tuple table
 *		MakeSingleTupleTableSlot - make a standalone slot, set its descriptor
 *		ExecDropSingleTupleTableSlot - destroy a standalone slot
 *
 *	 SLOT ACCESSORS
 *		ExecSetSlotDescriptor	- set a slot's tuple descriptor
 *		ExecStoreTuple			- store a physical tuple in the slot
 *		ExecStoreMinimalTuple	- store a minimal physical tuple in the slot
 *		ExecClearTuple			- clear contents of a slot
 *		ExecStoreVirtualTuple	- mark slot as containing a virtual tuple
 *		ExecCopySlotTuple		- build a physical tuple from a slot
 *		ExecCopySlotMinimalTuple - build a minimal physical tuple from a slot
 *		ExecMaterializeSlot		- convert virtual to physical storage
 *		ExecCopySlot			- copy one slot's contents to another
 *
 *	 CONVENIENCE INITIALIZATION ROUTINES
 *		ExecInitResultTupleSlot    \	convenience routines to initialize
 *		ExecInitScanTupleSlot		\	the various tuple slots for nodes
 *		ExecInitExtraTupleSlot		/	which store copies of tuples.
 *		ExecInitNullTupleSlot	   /
 *
 *	 Routines that probably belong somewhere else:
 *		ExecTypeFromTL			- form a TupleDesc from a target list
 *
 *	 EXAMPLE OF HOW TABLE ROUTINES WORK
 *		Suppose we have a query such as SELECT emp.name FROM emp and we have
 *		a single SeqScan node in the query plan.
 *
 *		At ExecutorStart()
 *		----------------
 *		- ExecInitSeqScan() calls ExecInitScanTupleSlot() and
 *		  ExecInitResultTupleSlot() to construct TupleTableSlots
 *		  for the tuples returned by the access methods and the
 *		  tuples resulting from performing target list projections.
 *
 *		During ExecutorRun()
 *		----------------
 *		- SeqNext() calls ExecStoreTuple() to place the tuple returned
 *		  by the access methods into the scan tuple slot.
 *
 *		- ExecSeqScan() calls ExecStoreTuple() to take the result
 *		  tuple from ExecProject() and place it into the result tuple slot.
 *
 *		- ExecutePlan() calls the output function.
 *
 *		The important thing to watch in the executor code is how pointers
 *		to the slots containing tuples are passed instead of the tuples
 *		themselves.  This facilitates the communication of related information
 *		(such as whether or not a tuple should be pfreed, what buffer contains
 *		this tuple, the tuple's tuple descriptor, etc).  It also allows us
 *		to avoid physically constructing projection tuples in many cases.
 */
#include "postgres.h"

#include "access/htup_details.h"
#include "access/tuptoaster.h"
#include "funcapi.h"
#include "catalog/pg_type.h"
#include "nodes/nodeFuncs.h"
#include "storage/bufmgr.h"
#include "utils/builtins.h"
#include "utils/lsyscache.h"
#include "utils/typcache.h"

#include "execTuples.h"
#include "vtype.h"
#include "utils.h"

static TupleTableSlot *VMakeTupleTableSlot(void);
static TupleTableSlot *VExecAllocTableSlot(List **tupleTable);
static void VExecAssignResultType(PlanState *planstate, TupleDesc tupDesc);

/* --------------------------------
 *		MakeTupleTableSlot
 *
 *		Basic routine to make an empty TupleTableSlot.
 * --------------------------------
 */
static TupleTableSlot *
VMakeTupleTableSlot(void)
{
	TupleTableSlot		*slot;
	VectorTupleSlot		*vslot;

	slot = palloc(sizeof(VectorTupleSlot));
	NodeSetTag(slot, T_TupleTableSlot);

	slot->tts_isempty = true;
	slot->tts_shouldFree = false;
	slot->tts_shouldFreeMin = false;
	slot->tts_tuple = NULL;
	slot->tts_tupleDescriptor = NULL;
	slot->tts_mcxt = CurrentMemoryContext;
	slot->tts_buffer = InvalidBuffer;
	slot->tts_nvalid = 0;
	slot->tts_values = NULL;
	slot->tts_isnull = NULL;
	slot->tts_mintuple = NULL;

	/* vector part */
	vslot = (VectorTupleSlot*)slot;
	vslot->dim = 0;
	memset(vslot->tts_buffers, InvalidBuffer, sizeof(vslot->tts_buffers));
	memset(vslot->skip, true, sizeof(vslot->skip));

	return slot;
}

/* --------------------------------
 *		ExecAllocTableSlot
 *
 *		Create a tuple table slot within a tuple table (which is just a List).
 * --------------------------------
 */
static TupleTableSlot *
VExecAllocTableSlot(List **tupleTable)
{
	TupleTableSlot *slot = VMakeTupleTableSlot();

	*tupleTable = lappend(*tupleTable, slot);

	return slot;
}



/* ----------------
 *		ExecInitResultTupleSlot
 * ----------------
 */
void
VExecInitResultTupleSlot(EState *estate, PlanState *planstate)
{
	planstate->ps_ResultTupleSlot = VExecAllocTableSlot(&estate->es_tupleTable);
}

/* ----------------
 *		ExecInitScanTupleSlot
 * ----------------
 */
void
VExecInitScanTupleSlot(EState *estate, ScanState *scanstate)
{
	scanstate->ss_ScanTupleSlot = VExecAllocTableSlot(&estate->es_tupleTable);
}

/* ----------------
 *		ExecInitExtraTupleSlot
 * ----------------
 */
TupleTableSlot *
VExecInitExtraTupleSlot(EState *estate)
{
	return VExecAllocTableSlot(&estate->es_tupleTable);
}

TupleTableSlot *
VExecClearTuple(TupleTableSlot *slot)	/* slot in which to store tuple */
{
	VectorTupleSlot *vslot = (VectorTupleSlot *)slot;
	vtype	*column;
	int i;
	/*
	 * sanity checks
	 */
	Assert(slot != NULL);

	/*
	 * Free the old physical tuple if necessary.
	 */
	if (slot->tts_shouldFree)
		heap_freetuple(slot->tts_tuple);
	if (slot->tts_shouldFreeMin)
		heap_free_minimal_tuple(slot->tts_mintuple);

	slot->tts_tuple = NULL;
	slot->tts_mintuple = NULL;
	slot->tts_shouldFree = false;
	slot->tts_shouldFreeMin = false;

	/*
	 * Drop the pin on the referenced buffer, if there is one.
	 */
	if (BufferIsValid(slot->tts_buffer))
		ReleaseBuffer(slot->tts_buffer);

	slot->tts_buffer = InvalidBuffer;

	/*
	 * Mark it empty.
	 */
	slot->tts_isempty = true;
	slot->tts_nvalid = 0;

	/* vector */
	i = 0;
	while (BufferIsValid(vslot->tts_buffers[i]))
	{
		ReleaseBuffer(vslot->tts_buffers[i]);
		vslot->tts_buffers[i++] = InvalidBuffer;
	}
	vslot->dim = 0;

	for (i = 0; i < slot->tts_tupleDescriptor->natts; i++)
	{
		column = (vtype *)DatumGetPointer(slot->tts_values[i]);
		column->dim = 0;
	}

	memset(vslot->skip, true, sizeof(vslot->skip));

	return slot;
}


void
VExecPinSlotBuffers(TupleTableSlot *slot, Buffer buffer, int idx)
{
	VectorTupleSlot	*vslot;

	/*
	 * sanity checks
	 */
	Assert(slot != NULL);
	Assert(slot->tts_tupleDescriptor != NULL);

	vslot = (VectorTupleSlot *)slot;
	
	vslot->tts_buffers[idx] = buffer;
	IncrBufferRefCount(buffer);
}


/* ----------------
 */
void
VExecAssignResultTypeFromTL(PlanState *planstate)
{
	bool		hasoid;
	TupleDesc	tupDesc;

	if (ExecContextForcesOids(planstate, &hasoid))
	{
		/* context forces OID choice; hasoid is now set correctly */
	}
	else
	{
		/* given free choice, don't leave space for OIDs in result tuples */
		hasoid = false;
	}

	/*
	 * ExecTypeFromTL needs the parse-time representation of the tlist, not a
	 * list of ExprStates.  This is good because some plan nodes don't bother
	 * to set up planstate->targetlist ...
	 */
	tupDesc = ExecTypeFromTL(planstate->plan->targetlist, hasoid);
	VExecAssignResultType(planstate, tupDesc);
}


/* ----------------
 *		ExecAssignResultType
 * ----------------
 */
static void
VExecAssignResultType(PlanState *planstate, TupleDesc tupDesc)
{
	TupleDesc	vdesc;
	int			i;
	TupleTableSlot *slot;
	VectorTupleSlot *vslot;
	
	slot = planstate->ps_ResultTupleSlot;
	vslot = (VectorTupleSlot *)slot;

	/* since we need to change the vtype in TupleDesc in relcache, we need to copy it. */
	vdesc = CreateTupleDescCopyConstr(tupDesc);

	for (i = 0; i < vdesc->natts; i++)
	{
		Form_pg_attribute attr = vdesc->attrs[i];
		Oid                     vtypid = GetVtype(attr->atttypid);
		if (vtypid != InvalidOid)
			attr->atttypid = vtypid;
	}

	ExecSetSlotDescriptor(slot, vdesc);

	/* initailize tuple batch */
	for (i = 0; i < vdesc->natts; i++)
	{
		Oid			typid;
		vtype		*column;

		typid = slot->tts_tupleDescriptor->attrs[i]->atttypid;
		column = buildvtype(typid, BATCHSIZE, vslot->skip);
		column->dim = 0;
		slot->tts_values[i]  = PointerGetDatum(column);
		/* tts_isnull not used yet */
		slot->tts_isnull[i] = false;
	}


}
