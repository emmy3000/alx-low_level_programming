#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"


/**
 * hash_table_create - program creates a new hash table
 *
 * @size: size of the hash table
 *
 * Return: pointer to a newly created hash table or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	/* New hash table instantiation */
	table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	/* Initialize hash table members */
	table->size = size;
	table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	/* Iterate and initialize overflow buckets to NULL */
	for (i = 0; i < size; i++)
	{
		if (table->array != NULL)
			table->array[i] = NULL;
		else
		{
			free(table->array);
			return (NULL);
		}
	}

	return (table);
}
