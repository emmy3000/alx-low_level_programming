#include <stdio.h>

/**
 * print_to_98 - Print numbers till 98 in order seperated by
 * comma followed by a space
 * @n: Number count starts at
 *
*/

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
