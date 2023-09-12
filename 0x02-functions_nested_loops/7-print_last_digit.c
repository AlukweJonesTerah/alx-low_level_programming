#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int types values
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int b;

	if (n < 0)
	{
		b = -1 * (n % 10);
		_putchar(b + '0');
		return (b);
	}
	else
	{
		b = n % 10;
		_putchar(b + '0');
		return (b);
	}
}
