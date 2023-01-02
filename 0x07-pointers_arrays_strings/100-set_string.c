#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: param pointer to be changed
 * @to: string pointer param being pointed towards
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
