#include <stdio.h>
/**
 * main - program that prints new lines of lowercase alphabets using putchar()
 *
 * Return: 0
 *
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
