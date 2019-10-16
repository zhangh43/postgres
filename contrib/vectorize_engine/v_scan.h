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

#ifndef VSCAN_H
#define VSCAN_H

#include "nodes/plannodes.h"

typedef Scan VSeqScan;

extern Plan *MakeVScanNode(SeqScan *oldnode);

extern void InitVectorScan(void);

#endif   /* GPVECTOR_H */
