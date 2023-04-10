#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Program deletes and deallocates memory
 * used by the hash table
 *
 * @ht: pointer to the hash table to be delete
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *temp;
	unsigned long int i;

	if (!ht || !ht->array || !ht->size)
		return;


	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
	}

	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
