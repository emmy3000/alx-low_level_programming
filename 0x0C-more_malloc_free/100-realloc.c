#include "main.h"

/**
 * _realloc - reallocates memory block using malloc and free
 *
 * @ptr: pointer to memory previously allocated
 * @old_size: byte size of allocated space for ptr
 * @new_size: new byte size for new memory block
 *
 * Return: pointer to new memory block allocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, n = new_size;
	char *old_ptr = ptr;

	if (ptr == null)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		p[i] = old_ptr[i];
	free(ptr);
	return (p);
}
