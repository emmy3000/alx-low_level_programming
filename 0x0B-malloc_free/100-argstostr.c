#include "main.h"
#include <stdlib.h>

/**
 * argtostr - concatenates all arguments in a program
 *
 * @ac: argument counter param
 * @av: array of arguments to be concatenated param
 *
 * Return: pointer to new string or NULL showing error
 */

char *argstostr(int ac, char **av)
{
	char *str, *offset;
	int i, j, k, str_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		offset = av[i];
		j = 0;

		while (offset[j++])
			str_len++;
		str_len++;
	}

	str = (char *)malloc(sizeof(char) * (str_len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac && j < str_len; i++)
	{
		offset = av[i];
		k = 0;

		while (offset[k])
		{
			str[j] = offset[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';

	return (str);
}
