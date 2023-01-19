#include "variadic_functions.h"

/**
 * print_strings - Prints strings passed to functions separated by separators
 *
 * @separator: string used to separate strings
 * @n: number of annonymous parameters
 *
 * Return: 0 Always
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list args;

	va_start(args, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
