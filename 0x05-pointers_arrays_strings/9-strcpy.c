#include "main.h"

/**
 * _strcpy - copy string string pointed to dest by src
 * @dest: char para checker
 * @src: char para checker
 *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
