#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	unsigned int i = 0, x;
	char *str, *sep;

	va_list args;
	va_start(args, format);
	sep = "";
	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				x = va_arg(args, int)
				printf("%s%c", sep, x);
				break;
			case 'i':
				x = va_arg(args, int)
				printf("%s%d", sep, x);
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("%s%s", sep, "(nil)");
					break;
				}
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
			}
			sep = ", ";
			i++;
		}
		printf("\n");
	}
	va_end(args);
}
