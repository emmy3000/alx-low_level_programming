#include "function_pointers"

/**
 * array_iterator - function parameter stored in each element
 * of an array
 *
 * @array: array executing function on
 * @size: size of the array
 * @action: is a pointer to the function you needed for use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
