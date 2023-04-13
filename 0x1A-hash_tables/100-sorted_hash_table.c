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

/**
 * make_shash_node - create a new node for the sorted hash table
 *
 * @key: the key for the new node
 * @value: the value for the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */

shash_node_t *make_shash_node(const char *key, const char* value)
{
	shash_node_t *new_node;

	if (key == NULL || value == NULL)
		return (NULL);

	new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);

	if (new_node == NULL)
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

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->next = NULL;

	return(new_node);
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
	shash_node_t *current_node;

	if (table == NULL || node == NULL)
		return;

	/* Case 1: List is empty */
	if (table->head == NULL)
	{
		table->shead = node;
		table->stail = node;
		node->sprev = NULL;
		node->snext = NULL;
		return;
	}

	/* Case 2: Insert at the beginning of the list */
	if (strcmp(node->key, table->shead->key) < 0)
	{
		node->sprev = NULL;
		node->snext = table->shead;
		table->shead->prev = node;
		table->shead = node;
		return;
	}

	/* Case 3: Insert in the middle of the list */
	current_node = table->shead;
	while (current_node != NULL)
	{
		if (strcmp(node->key, current_node->key) < 0)
		{
			node->sprev = current_node->sprev;
			node->snext = curent_node;
			current_node->sprev->snex = node;
			current_node->sprev = node;
			return;
		}
		current_node = current_node->next;
	}

	/* Case 4: Insert at the end of the list */
	node->sprev = table->stail;
	node->snext = NULL;
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
	unsigned long int idx;
	shash_node_t *node, *tmp;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idex = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);

			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}

	node = make_shash_node(key, value);

	if (node == NULL)
		return(0);

	add_to_sorted_list(ht, node);

	 node->next = ht->array[idx];
	 ht->array[idx] = node;

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
	shash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
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
	shash_node_t *node;

	if (ht == NULL)
		return;

	putchar('{');

	for (node = ht->shead; node != NULL; node = node->snext)
	{
		printf("'%s': '%s'", node->key, node->value);

		if (node->snext != NULL)
		{
			putchar(',');
			putchar(' ');
		}
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
	int blanks = 0;
	/* False before printing any data, True afterwards */
	char blanks = 0;

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

		printf("'%s', '%s'", temp->key, temp->value);

		blanks = 1;
		temp = temp->next;

	}
	putchar('}');
	putchar('\n');
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
	shash_node_t *node, *temp;
	unsigned long int i = 0;

	if (!ht || !ht->array || !ht->size)
		return;

	for (; i < ht->size; i++)
	{
		node = ht->size[i];

		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free9temp->value);
			free(temp);
		}
	}

	free(ht->array);
	ht->array = NULL;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->size = 0
	free(ht);
