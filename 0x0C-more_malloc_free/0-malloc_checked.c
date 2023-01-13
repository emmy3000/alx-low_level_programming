#include "main.h"

/**
 * malloc_checked - program that allocates memory
 *
 * @b: amount of memory to be allocated
 *
 * Return: pointed allocated to memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
