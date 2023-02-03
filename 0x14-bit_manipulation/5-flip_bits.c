#include "main.h"

/**
 * flip_bits - flip to from one num to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, result;
	unsigned int j, i;

	j = 0;
	result = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (diff & result))
			j++;
		result <<= 1;
	}

	return (j);
}
