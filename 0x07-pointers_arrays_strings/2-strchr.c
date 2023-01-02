#include "main.h"

/**
 * _strchr - function that locates char c in string s
 *
 * @s: string poniter param
 * @c: character occurrence param
 *
 * Return: pointer of first occurence of char c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
