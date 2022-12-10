#include <stdio.h>
/**
 * main - program that prints new lines of alphabets in lowercase using putchar()
 *
 * Return: 0
 * 
*/
int main()
{
	int i;
	for ( i = 'a'; i <= 'z'; i++ )
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
