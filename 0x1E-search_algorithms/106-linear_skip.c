#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 *		using linear skip algorithm.
 *
 * @list: A pointer to the head of the skip list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *	  Otherwise, a pointer to the first node where the value is located.
 *
 * Description: This function performs a search for a value in a sorted skip list.
 *	       It uses the linear skip algorithm, which optimizes the search time
 *	       complexity by adding an "express lane" to the list.
 *	       The express lane contains nodes at indices that are multiples of
 *	       the square root of the list size, allowing for faster traversal.
 *	       The function prints each value checked during the search.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jump;

	if (list == NULL)
		return (NULL);

	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
