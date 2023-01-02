#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory location
 *           pointed to by s with the constant byte b
 *
 * @n: int number of bytes pointed to by char *s
 * @s: char pointer param with constant byte of char b
 * @b: param of pointer memory location
 *
 * Return: pointer memory location of char *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
