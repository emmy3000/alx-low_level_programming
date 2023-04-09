#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"


/**
 * hash_table_create: program create a new hash table.
 *
 * @size: size of the hash table.
 *
 * Returns: a pointer to a new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	
	/* new hash table instantiation */
	hash_table_t* table;
	table = (hash_table_t*)malloc(sizeof(hash_table_t));
	
	if (table == NULL)
		return NULL;

	/* Initializing hash table members */
	table->size = size;
	table->array = (hash_node_t**)malloc(sizeof(hash_node_t*));

	return table;
}