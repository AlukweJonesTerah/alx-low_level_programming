#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, n, x;
	double d;

	i = 0;
	n = strlen(format);
	va_start(args, format);
	while (i < n)
	{
		switch (format[i])
		{
			case 'c':
				x = va_arg(args, int);
				printf("%c", x);
				break;
			case 'i':
				x = va_arg(args, int);
				printf("%d", x);
				break;
			case 'f':
				d = va_arg(args, double);
				printf("%f", d);
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
						printf("(nil)");
					printf("%s", str);
				}
				break;
		}
		if (i < n - 1 && (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(args);
	putchar(10);
}
