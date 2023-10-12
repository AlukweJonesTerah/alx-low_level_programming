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
	unsigned int i, sum, x;

	va_list args;
	va_start(args, n);
	i = n;
	sum = 0;
	if (n == 0)
		return (0);
	x = va_arg(args, int);
	while (i > 0)
	{
		sum += x;
		x = va_arg(args, int);
		i--;
	}
	return (sum);
	va_end(num);
}
