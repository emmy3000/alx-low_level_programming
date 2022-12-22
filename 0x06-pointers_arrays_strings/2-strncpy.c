#include "main.h"

/**
 *_strncpy - function that copies a string
 *
 * @src: string source parameter
 * @dest: string destination parameter
 * @n: integer length
 *
 * Return: result destination string's pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
