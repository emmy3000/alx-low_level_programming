#include "main-h"

/**
 * print_array - prints integer elements in an array
 * @a: int array pointer check
 * @n: int elements in array
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(a[i]);
		}
	_putchar('\n');
}
