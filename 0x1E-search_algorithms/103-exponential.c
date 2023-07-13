#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search_recursive - Searches for a value in a sorted array
 *                           of integers using binary search recursively.
 *
 * @array: A pointer to the first element of the array to search.
 * @left: The starting index of the subarray to search.
 * @right: The ending index of the subarray to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: This function performs binary search on a sorted array
 *              to find the index of the specified value. It uses a recursive
 *              approach and prints the subarray being searched after each change.
 */
int binary_search_recursive(int *array, size_t left, size_t right, int value)
{
	size_t i, mid;

	if (array == NULL)
		return (-1);

	if (right >= left)
	{
		mid = left + (right - left) / 2;

		/* Print the subarray being searched */
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != left)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binary_search_recursive(array, left, mid - 1, value));
		return (binary_search_recursive(array, mid + 1, right, value));
	}

	return (-1);
}

/**
 * exponential_search - Searches for a value in a sorted array
 *                      of integers using exponential search.
 *
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the index where the value is located.
 *
 * Description: This function performs exponential search on a sorted array
 *              to find the index of the specified value. It starts with a
 *              small range and exponentially increases the range until the
 *              value is found or the end of the array is reached. It then
 *              calls the binary_search_recursive function to perform
 *              binary search on the identified range and prints the
 *              value being checked in the array.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL || size == 0)
		return (-1);

	/* Exponentially increase the search range */
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound >= size)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, size - 1);
		return (binary_search_recursive(array, bound / 2, size - 1, value));
	}

	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound);
	return (binary_search_recursive(array, bound / 2, bound, value));
}
