#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 * using jump search algorithm
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Description: This function performs a jump search on the given
 *		sorted array to find the index of the specified value.
 *		It uses the square root of the array size as the jump step.
 *		The array is divided into blocks, and it checks the value
 *		at each block. If the value is not found, it moves to the
 *		next block based on the jump step. It prints the values
 *		checked during the search as per the example output.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (array[step] < value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;

		if (prev == (step + 1))
			return (-1);
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		return (prev);
	}

	return (-1);
}
