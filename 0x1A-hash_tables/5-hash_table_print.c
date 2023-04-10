#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "hash_tables.h"

/**
 * hash_table_print - Program prints the hash table.
 *
 * @ht: hash table containing keys & values
 *
 * Return: key/value contained in hash table array to
 * 	be printed in a specific order
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i = 0;
	bool blanks = false;

	putchar('{');
	
	for (; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			if (blanks == true)
			{
				putchar(',');
				putchar(' ');
			}
			printf("'%s': '%s'", node->key, node->value);
			putchar(',');
			putchar(' ');

			node = node->next;
		}
	}
	putchar('}');
	putchar('\n');
}
