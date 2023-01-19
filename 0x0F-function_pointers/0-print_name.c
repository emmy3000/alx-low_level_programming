#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: a given name
 * @f: function of the name
 *
 * Return: void
 */

void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
