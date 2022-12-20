#include "main.h"

/**
 * rev_string - reverses a string
 * @s: char parameter check
 *
 * Return: 0
*/

void rev_string(char *s)
{
	int i = 0, j, k;
	char rev;

	while (s[i] != '\0')
	{
		i++;
	}

	/* init last char in the string */
	k = i - 1;

	/* loop through chars till they clash in the middle */
	for (j = 0; k >= 0 && j < k; k--, b++)
	{
		rev = s[j];
		s[j] = s[k];
		s[k] = rev;
	}
}
