/*-------------------------------------------------------------------------
 *
 * nodescan.h
 *
 *-------------------------------------------------------------------------
 */

#ifndef VECTOR_ENGINE_NODE_SCAN_H
#define VECTOR_ENGINE_NODE_SCAN_H

#include "nodes/plannodes.h"

//typedef Scan VSeqScan;
extern CustomScan *MakeCustomScanForSeqScan(void);
extern void InitVectorScan(void);

#endif   /* VECTOR_ENGINE_SCAN_H */
