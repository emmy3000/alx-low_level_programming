#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - Program prints the hash table.
 *
 * @ht: hash table containing keys & values
 *
 * Return: key/value contained in hash table array to
 * be printed in a specific order
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0;
	int blanks = 0;

	putchar('{');

	for (; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (blanks == 1)
			{
				putchar(',');
				putchar(' ');
			}
			printf("'%s': '%s'", node->key, node->value);
			blanks = 1;

			node = node->next;
		}
	}
	putchar('}');
	putchar('\n');
}
