#include <stdio.h>
#include <math.h>
/**
 * main - program entry
 *
 * Description: printing single digit numbers to base 10
 *
 * Return: 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");

	return (0);
}
