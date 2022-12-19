#include "main.h"

/**
 * swap_int - program entry point
 * Description: swapping value between integers
 * @a: integer parameter 1
 * @b: integer parameter 2
 *
 * Return: 0
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
