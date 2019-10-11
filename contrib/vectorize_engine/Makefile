# contrib/vectorize_engine/Makefile

MODULE_big = vectorize_engine

EXTENSION = vectorize_engine

REGRESS = vectorize_engine

OBJS += vector_engine.o
OBJS += v_scan.o
OBJS += vtype.o
OBJS += vcheck.o
OBJS += vconvert.o

# print vectorize info when compile
#PG_CFLAGS = -fopt-info-vec

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
