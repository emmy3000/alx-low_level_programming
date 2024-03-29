#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_hash_node - Allocates and initializes a new hash node
 *
 * @key: The key string for the new node
 * @value: The value string for the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	node->value = strdup(value);

	if (node->key == NULL && node->value == NULL)
	{
		fprintf(stderr, "Error: Memory allocation failed\n");
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - Program adds an element to the hash table
 *
 * @ht: hash table where elements(key/value) are added or updated
 * @key: key to the index of the value
 * @value: element referenced by the key
 *
 * Return: 1 success, 0 collision occurred
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp_node;
	unsigned long int index;

	if (strlen(key) == 0 || ht == NULL || value == NULL)
	{
		fprintf(stderr, "Key cannot be an empty string\n");
		return (0);
	}

	new_node = create_hash_node(key, value);

	if (new_node == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	temp_node = ht->array[index];

	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			free(temp_node->value);
			temp_node->value = strdup(value);

			if (temp_node->value == NULL)
				return (0);
			return (1);
		}
		temp_node = temp_node->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);

}
