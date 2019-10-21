#include "postgres.h"
#include "catalog/namespace.h"
#include "utils/lsyscache.h"
#include "utils/syscache.h"
#include "utils/hsearch.h"
#include "utils.h"

typedef struct VecTypeHashEntry
{
	Oid src;
	Oid dest;
}VecTypeHashEntry;

/* Map between the vectorized types and non-vectorized types */
static HTAB *hashMapN2V = NULL;
static HTAB *hashMapV2N = NULL;


/*
 * map non-vectorized type to vectorized type.
 * To scan the PG_TYPE is inefficient, so we create a hashtable to map
 * the vectorized type and non-vectorized types.
 */
Oid GetVtype(Oid ntype)
{
	VecTypeHashEntry *entry = NULL;
	bool found = false;

	//construct the hash table
	if(NULL == hashMapN2V)
	{
		HASHCTL		hash_ctl;
		Oid			vtypid = TypenameGetTypid("vint4");
		Oid			typid = TypenameGetTypid("int4");

		if (vtypid == InvalidOid)
			return InvalidOid;

		MemSet(&hash_ctl, 0, sizeof(hash_ctl));

		hash_ctl.keysize = sizeof(Oid);
		hash_ctl.entrysize = sizeof(VecTypeHashEntry);
		hash_ctl.hash = oid_hash;

		hashMapN2V = hash_create("vectorized_n2v", 64/*enough?*/,
								&hash_ctl, HASH_ELEM | HASH_FUNCTION);

		/* insert int4->vint4 mapping manually, may construct from catalog in future */
		entry = hash_search(hashMapN2V, &typid, HASH_ENTER, &found);
		entry->dest = vtypid;
	}

	//first, find the vectorized type in hash table
	entry = hash_search(hashMapN2V, &ntype, HASH_FIND, &found);
	if(found)
		return entry->dest;
	/* currently only support int4 */
	return InvalidOid;
}



/*
 * map non-vectorized type to vectorized type.
 * To scan the PG_TYPE is inefficient, so we create a hashtable to map
 * the vectorized type and non-vectorized types.
 */
Oid GetNtype(Oid vtype)
{
	VecTypeHashEntry *entry = NULL;
	bool found = false;

	//construct the hash table
	if(NULL == hashMapV2N)
	{
		HASHCTL		hash_ctl;
		Oid			vtypid = TypenameGetTypid("vint4");
		Oid			typid = TypenameGetTypid("int4");

		if (vtypid == InvalidOid)
			return InvalidOid;

		MemSet(&hash_ctl, 0, sizeof(hash_ctl));

		hash_ctl.keysize = sizeof(Oid);
		hash_ctl.entrysize = sizeof(VecTypeHashEntry);
		hash_ctl.hash = oid_hash;

		hashMapV2N = hash_create("vectorized_v2n", 64/*enough?*/,
								&hash_ctl, HASH_ELEM | HASH_FUNCTION);

		/* insert int4->vint4 mapping manually, may construct from catalog in future */
		entry = hash_search(hashMapV2N, &vtypid, HASH_ENTER, &found);
		entry->dest = typid;
	}

	//first, find the vectorized type in hash table
	entry = hash_search(hashMapV2N, &vtype, HASH_FIND, &found);
	if(found)
		return entry->dest;
	/* currently only support int4 */
	return InvalidOid;
}

Oid
GetTupDescAttVType(TupleDesc tupdesc, int i)
{
	Form_pg_attribute att = tupdesc->attrs[i];
	return GetVtype(att->atttypid);
}
