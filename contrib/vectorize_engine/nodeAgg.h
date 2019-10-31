/*-------------------------------------------------------------------------
 *
 * nodeAgg.h
 *	  TODO file description
 *
 *
 * Copyright (c) 2019-Present Pivotal Software, Inc.
 *
 *
 *-------------------------------------------------------------------------
 */

#ifndef VECTOR_ENGINE_NODE_AGG_H
#define VECTOR_ENGINE_NODE_AGG_H

#include "nodes/plannodes.h"

extern CustomScan *MakeCustomScanForAgg(void);
extern void InitVectorAgg(void);

#endif   /* VECTOR_ENGINE_NODE_AGG_H */
