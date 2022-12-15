#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: character parameter
 *
 * Return: 1 for uppercase or 0 for lowercase
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
