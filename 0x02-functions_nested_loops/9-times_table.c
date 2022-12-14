#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int num, multiplier, result;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (multiplier = 1; multiplier <= 9; multiplier++)
		{
			_putchar(',');
			_putchar(' ');
			result = num * multiplier;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
