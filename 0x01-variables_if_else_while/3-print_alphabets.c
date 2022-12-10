#include <stdio.h>
/**
 *
 * main - print lowercase and uppercase alphabets
 *
 * Return :0
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
