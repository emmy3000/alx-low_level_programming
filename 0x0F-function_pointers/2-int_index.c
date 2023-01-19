#include "function_pointers.h"

/**
 * int_index - searches arrays for a target int
 *
 * @array: array housing target int
 * @size: number of elements in the array
 * @cmp: pointer function used for comparing values
 *
 * Return: -1 if size <= 0, no element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp !=  NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}
	return (-1);
}
