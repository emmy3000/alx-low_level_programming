#include <stdio.h>
/**
 * main - program that prints new lines of lowercase alphabets in
 * reverse order using putchar()
 *
 * Return: 0
 *
*/
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
