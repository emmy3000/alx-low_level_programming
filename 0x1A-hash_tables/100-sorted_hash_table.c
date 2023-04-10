#include <stdio.h>
#include <stdlib>
#include "hash_tables.h"


/*
 * shash_table_create - program creates a sorted array
 *
 * @size: size of the hash table
 *
 * Return: pointer to the newly created hash table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	if (size < 1)
		return NULL;

	ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return NULL;

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);

	if (ht->array == NULL)
	{
		free(ht);
		return NULL;
	}

	for (i = 0; i < size, i++)
		ht->array[i] = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	return (ht);
}



