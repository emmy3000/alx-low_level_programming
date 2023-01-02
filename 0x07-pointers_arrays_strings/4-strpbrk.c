#include "main.h"

/**
 * _strpbrk - functions searches for certain set of bytes in a string
 *
 * @s: first occurence in a string
 * @accept: used to match a byte
 *
 * Return: pointer to a byte
 */

har *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
