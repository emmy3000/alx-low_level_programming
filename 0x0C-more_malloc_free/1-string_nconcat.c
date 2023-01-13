#include "main.h"

/**
 * string_nconcat - function that concatenates 2 strings
 *
 * @s1: 1st char pointer param
 * @s2: 2nd char pointer param
 * @n: max number of chars taken from s2
 *
 * Return: NULL if malloc fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *str;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; ++i)
		;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; ++j)
		;
	}
	if (j > n)
		j = n
	s = malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	for (k = 0; k < x; k++)
		str[k] = s1[k];
	for (k = 0; k < j; k++)
		str[k + i] = s2[k];
	str[i + j] = '\0';
	return (str);
}
