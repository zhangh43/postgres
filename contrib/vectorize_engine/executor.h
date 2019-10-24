#ifndef VECTOR_ENGINE_EXECUTOR_H
#define VECTOR_ENGINE_EXECUTOR_H

#include "postgres.h"

extern bool VExecScanQual(List *qual, ExprContext *econtext, bool resultForNull);

#endif
