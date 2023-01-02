#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src
 *         to memory area dest
 *
 * @n: bytes to be copied
 * @src: memory location where n bytes are copied from
 * @dest: memory location of n where bytes are copied to
 *
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
