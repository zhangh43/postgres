--
-- Regression Tests for Custom Plan APIs
--

-- construction of test data
SET client_min_messages TO 'warning';

CREATE SCHEMA regtest_custom_scan;

SET search_path TO regtest_custom_scan, public;

CREATE TABLE t1 (
    a   int
);
INSERT INTO t1 (SELECT s FROM generate_series(1,400) s);
VACUUM ANALYZE t1;

RESET client_min_messages;
--
-- Check Plans if no special extension is loaded.
--
EXPLAIN (costs off) SELECT * FROM t1;
--
--
LOAD '$libdir/vectorize_engine';
EXPLAIN (costs off) SELECT * FROM t1;

-- Test cleanup
DROP SCHEMA regtest_custom_scan CASCADE;
