#include "main.h"

/**
 * create_array - creates an array of chars initialized with a
 *                specific char
 *
 * @size: size or length of the array
 * @c: char initializer param
 *
 * Return: *char or NULL if empty
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	char *array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i  = 0; i < size; i++)
		array[i] = c;

	return (array);
}

