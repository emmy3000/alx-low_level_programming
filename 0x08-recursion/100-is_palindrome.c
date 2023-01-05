#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 *
 * @s: the string to be printed
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * pal_checker - checks if string is palindrome
 *
 * @s: string param pointer or memory address
 *
 * @i: left index param
 * @j: rigth index param
 *
 * Return: 1 if strinf is palindrome, 0 otherwise.
 */

int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - checks if strinf is a palindrome
 *
 * @s: memory address for string or pointer param
 *
 * Return: 1 if int n is a prime num, 0 otherwise.
 */

int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
