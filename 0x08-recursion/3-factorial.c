#include "main.h"

/**
 * factorial - returns the factorial of an int
 *
 * @n: int param
 *
 * Return: int
 */

int factorial(int n)
{
	int i;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		i = n * factorial(n - 1);
	}
			return (i);

}
