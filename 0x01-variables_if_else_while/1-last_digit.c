#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print last digit of a random integer variable
 *
 * Return: 0
*/
int main(void)
{
	int n, rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;
	/* your code goes there */
	if (rem > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	if (rem == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	if (rem == 6)
		printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	if (rem < 6 && rem != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem);

	return (0);
}
