#include "main.h"

/**
 * put2 - prints every char starting with 1st char
 * followed by new line
 * @str: string parameter
 *
 * Return: 0
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
