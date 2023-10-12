#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - variadic prototype for sum
 * @n: par
 * @...: par
 * Description: variadic prototype for sum
 * Return: variadic sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int val;
	unsigned int sum;
	unsigned int i;

	sum = 0;
	va_start(vl, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			val = va_arg(vl, unsigned int);
			sum += val;
		}
		va_end(vl);
		return (sum);
	}
	return (0);
}
