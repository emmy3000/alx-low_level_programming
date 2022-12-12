#include <stdio.h>
/**
 * main - prints all possibe combinations of two different digits
 * in an ascending order, seperated by a comma followed by a space
 *
 * Return: 0
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

