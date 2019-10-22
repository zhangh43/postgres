# contrib/vectorize_engine/Makefile

MODULE_big = vectorize_engine

EXTENSION = vectorize_engine

REGRESS = vectorize_engine

OBJS += vectorEngine.o
OBJS += vtype.o
OBJS += nodeScan.o
OBJS += nodeUnbatch.o
OBJS += plan.o
OBJS += utils.o
OBJS += execTuples.o

# print vectorize info when compile
#PG_CFLAGS = -fopt-info-vec
PG_CFLAGS = -Wno-int-in-bool-context
ifdef USE_PGXS
PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)
else
subdir = contrib/vectorize_engine
top_builddir = ../..
include $(top_builddir)/src/Makefile.global
include $(top_srcdir)/contrib/contrib-global.mk
endif
