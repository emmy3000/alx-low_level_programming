#include "main.h"

/**
 * malloc_checked - program is terminated with status value of 98
 * or allocates memory to new pointer
 *
 * @b: amount of memory to be allocated
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
