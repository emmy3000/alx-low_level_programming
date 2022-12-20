#include "main.h"

/**
 * _strlen - reads length of a string
 * @s: string parameter
 *
 * Return: 0
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
