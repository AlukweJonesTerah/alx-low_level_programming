#include "variadic_functions.h"
#include <stdarg.h>
#include<stdio.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: string param
 * @n: starter agr
 * @...: unknow number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);
		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(args);
	putchar(10);
}
