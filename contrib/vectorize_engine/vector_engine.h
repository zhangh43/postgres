/*-------------------------------------------------------------------------
 *
 * gpvector.h
 *	  TODO file description
 *
 *
 * Copyright (c) 2019-Present Pivotal Software, Inc.
 *
 *
 *-------------------------------------------------------------------------
 */

#ifndef GPVECTOR_H
#define GPVECTOR_H

#define VectorNodeTagOffset 1500

typedef enum VectorNodeTag
{
	T_VSeqScan = VectorNodeTagOffset
}VectorNodeTag;

//#define newVectorNode(size, tag) \
//({	Node   *_result; \
//	AssertMacro((size) >= sizeof(Node));		/* need the tag, at least */ \
//	_result = (Node *) palloc0fast(size); \
//	_result->type = (tag); \
//	_result; \
//})

#define makeVectorNode(_type_)		((_type_ *) newNode(sizeof(_type_),T_##_type_))



extern void _PG_init(void);

extern void init_vectorscan(void);

#endif   /* GPVECTOR_H */
