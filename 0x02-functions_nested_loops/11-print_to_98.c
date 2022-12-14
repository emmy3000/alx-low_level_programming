#include "main.h"

/**
 * print_to_98 - Print numbers till 98 in order seperated
 * comma followed by a space
 * @n: Number count starts at
 *
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98){
		{
			_putchar(' ');
			_putchar(n--);
		}
		_putchar('\n');
		_putchar(n);
	}

	else
	{
		while (n < 98)
		{
			_putchar(' ');
			_putchar(n++);
		}
		_putchar('\n');
		_putchar(n);
	}
}
