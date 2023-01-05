#include "main.h"

/**
 * check - checks to see if int is prime
 *
 * @x: int param
 * @y: int param
 *
 * Return: int
 */

int check(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (check(x + 1, y));
}

/**
 * is_prime_number - bool return if int is prime
 *
 * @n: int param
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
