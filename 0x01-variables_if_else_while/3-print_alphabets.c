#include <stdio.h>
/**
 * main - program that prints lowercase alphabets, uppercase alphabets to a new line
 *
 * Return 0
 *
*/
int main(void)
{
	int i;
	int j = 65;

	for (i = 97; i <= 122; i++)
		putchar(i);
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
