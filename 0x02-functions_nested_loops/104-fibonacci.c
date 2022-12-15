#include <stdio.h>

/**
 * main - Prints the first 98 fibonacci numbers, starting with 1 and 2
 * by a comma followed by a space.
 *
 * Return: 0
*/

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long f1, f2, f3, f4;
	unsigned long h1, h2;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	f1 = fib1 / 10000000000;
	f3 = fib2 / 10000000000;
	f2 = fib1 % 10000000000;
	f4 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		h1 = f1 + f3;
		h2 = f2 + f4;
		if (f2 + f4 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}

		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(", ");

		f1 = f3;
		f2 = f4;
		f3 = h1;
		f4 = h2;
	}
	printf("\n");
	return (0);
}
