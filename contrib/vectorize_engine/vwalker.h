/*
 * vwalkers.h
 */

#ifndef VWALKERS_H_
#define VWALKERS_H_

#include "nodes/nodes.h"
#include "nodes/parsenodes.h"
#include "nodes/nodeFuncs.h"
#include "nodes/relation.h"

extern bool walk_plan_node_fields(Plan *plan, bool (*walker) (), void *context);

extern bool plan_tree_walker(Node *node, bool (*walker) (), void *context);



#endif /* VWALKERS_H_ */
