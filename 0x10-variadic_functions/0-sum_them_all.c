#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: param showing start of args
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int sum;
	unsigned int x;

	va_start(args, n);
	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, unsigned int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
