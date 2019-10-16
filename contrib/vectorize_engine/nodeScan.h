/*-------------------------------------------------------------------------
 *
 * vscan.h
 *	  TODO file description
 *
 *
 * Copyright (c) 2019-Present Pivotal Software, Inc.
 *
 *
 *-------------------------------------------------------------------------
 */

#ifndef VECTOR_ENGINE_SCAN_H
#define VECTOR_ENGINE_SCAN_H

#include "nodes/plannodes.h"

typedef Scan VSeqScan;
extern CustomScan *MakeCustomScanForSeqScan(void);
extern void InitVectorScan(void);

#endif   /* VECTOR_ENGINE_SCAN_H */
