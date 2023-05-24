
#include <stdio.h>
#include <stdlib.h>
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
	shash_table_t *sht;
	unsigned long int i = 0;

	sht = malloc(sizeof(shash_table_t));

	if (sht == NULL)
		return (NULL);

	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;
	sht->array = malloc(sizeof(shash_node_t) * size);

	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}

	for (; i < size; i++)
	{
		sht->array[i] = NULL;
	}
	return (sht);
}


/**
 * make_shash_node - create a new node for the sorted hash table
 *
 * @key: the key for the new node
 * @value: the value for the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */

shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *new_nod;

	new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = new_node->snext = new_node->sprev = NULL;
	return (new_node);
}


/**
 * add_to_sorted_list - adds a node to the sorted linked list of a hash table
 *
 * @table: the hash table to add the node to
 * @node: the node to add
 *
 * Return: void
 */
void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *temp;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}

	temp = table->shead;

	while (temp != NULL)
	{
		if (strcmp(node->key, temp->key) < 0)
		{
			node->snext = temp;
			node->sprev = temp->sprev;
			temp->sprev = node;

			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		temp = temp->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}


/**
 * shash_table_set - sets a key-value in a sorted hash table
 *
 * @ht: the sorted hash table to set the key-value pair in
 * @key: the key of the key-value pair
 * @value: the value of the key-value pair
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int inx;
	char *new_value;
	shash_node_t *node, *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);

			if (new_value == NULL)
				return (0);

			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	node = make_shash_node(key, value);

	if (node == NULL)
		return (0);

	node->next = ht->array[idx];
	ht->array[idx] = node;
	add_to_sorted_list(ht, node);
	return (1);
}


/**
 * shash_table_get - gets the value associated with a key in a 
 * sorted hash table
 *
 * @ht: the sorted hash table to get the value from
 * @key: the key of the key-value pair to get the value for
 *
 * Return: the value associated with the key, or NULL if the key is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}
	return (NULL);
}


/**
 * shash_table_print - Prints the key/value pairs of a sorted hash table
 *
 * @ht: Pointer to the sorted hash table
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char blanks = 0; /* populate empty space if 0 else 1 */

	if (!ht || !ht->array)
		return;

	printf("{");

	temp = ht->shead;
	while (temp != NULL)
	{
		if (blanks == 1)
		{
			putchar(',');
			putchar(' ');
		}

		printf("'%s': '%s'", temp->key, temp->value);
		blanks = 1;
		temp = temp->snext;
	}
	putchar('}');
	putchar('\n');
}


/**
 * shash_table_print_rev - Prints the key/value pairs of a sorted hash table
 * in reverse
 *
 * @ht: Pointer to the sorted hash table
 *
 * Return: void
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char blanks = 0; /* populate empty space if 0 else 1 */

	if (!ht || !ht->array)
		return;

	putchar('{');
	temp = ht->stail;

	while (temp != NULL)
	{
		if (blanks == 1)
		{
			putchar(',');
			putchar(' ');
		}

		printf("'%s': '%s'", temp->key, temp->value);
		blanks = 1;
		temp = temp->sprev;
	}
	putchar('}');
	puthar('\n');
}


/**
 * shash_table_delete - Deletes a sorted hash table
 *
 * @ht: Pointer to the sorted hash table
 *
 * Return: void
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *next;

	if (!ht || !ht->array || !ht->size)
		return;

	for (; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			next = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = next;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
