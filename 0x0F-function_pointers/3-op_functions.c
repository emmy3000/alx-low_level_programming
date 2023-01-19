#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - function summation
 *
 * @a: int a
 * @b: int b
 *
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function subtraction
 *
 * @a: int a
 * @b: int b
 *
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function multiplication
 *
 * @a: int a
 * @b: int b
 *
 * Return: multiplication of a and b
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function division
 *
 * @a: int a
 * @b: int b
 *
 * Return: Division of a and b, Error if int == 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function results to remainder
 *
 * @a: int a
 * @b: int b
 *
 * Return: a % b, Error if int == 0
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
