#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonaci sequence terms
 * not exceeding 4000000
 *
 * Return: 0
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 2, fib_sum;
	float t_sum;

	while (1)
	{
		fib_sum = fib1 + fib2;
		if (fib_sum > 4000000)
			break;

		if ((fib_sum % 2) == 0)
			t_sum += fib_sum;

		fib1 = fib2;
		fib2 = fib_sum;
	}
	printf("%.0f\n", t_sum);
	return (0);
}
