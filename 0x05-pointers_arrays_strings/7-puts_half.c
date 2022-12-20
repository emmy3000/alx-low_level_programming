#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: string parameter check
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i = 0, half_length;

	while (str[i] != '\0')
		i++;
	if (i + 1 % 2 != 0)
		half_length = i / 2 - 1;
	else
		half_length = i / 2;
	half_length++;

	for (i = half_length; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');

}
