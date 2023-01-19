#include "variadic_functions.h"

/**
 * print_all - prints specified arguments
 *
 * @format: operation specific parameter
 *
 * Return: void
 */

void print_all(cons char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_list arg_list;

	va_start(arg_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(arg_list, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(arg_list, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(arg_list, int);
				flag = 0;
				break;
			case 's':
				str = va_arg(arg_list, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg_list);
}
