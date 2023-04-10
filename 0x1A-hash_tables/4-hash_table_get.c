#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Program retrieves a value associated with a key
 *
 * @ht: hash table containing value searched
 * @key: the key asscoiated with the value
 *
 * Return: value searched in ht or NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}

		node = node->next;
	}

	return (NULL);
}
