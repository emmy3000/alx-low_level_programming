#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_delete - Program deletes a hash table
 *
 * @ht: hash table to be deleted
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *temp;
	unsigned long int i;


	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			node = temp;
		}
	
	}

	free(ht->array);
	free(ht);
}
