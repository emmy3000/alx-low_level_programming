#include <stdio.h>

/**
 * main - program entry point
 *
 * Description: prints numbers 1 to 100
 * multiples of 3 output Fizz, multiples of 5 output Buzz,
 * multiples of 15 output FizzBuzz
 *
 * Return: 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
