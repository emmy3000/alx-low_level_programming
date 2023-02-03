#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: checking bits
 * @index: which bit ti check
 *
 * Return: value of the bit at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int deiv, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	res = n & div;
	if (res == div)
		return (1);

	return (0);
}
