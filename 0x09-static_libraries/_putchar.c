#include <unistd.h>


/**
 * _putchar - outputs a character
 *
 * @c: character param
 *
 * Return: 1 for success and -1 for error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
