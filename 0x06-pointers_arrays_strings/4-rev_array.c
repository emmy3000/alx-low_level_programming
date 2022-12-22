#include "main.h"

/**
 * reverse_array - reverses an array
 *
 * @a: pointer to array of integers
 * @n: integer parameter indicating number of elemenst in an array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i, c;

for (i = 0; (i < (n - 1) / 2); i++)
	{
	c = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = c;
	}
}
