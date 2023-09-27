#include "main.h"
/**
 * sqrt_h - func prototype
 * @i: num1
 * @n: num2
 * Return: 0 success else -1
 */
int sqrt_h(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = sqrt_h(i + 1, n);
		return (j + 1);
	}
	return (0);
}
/**
 * _sqrt_recursion - a function that returns
 * the natural square root of a number.
 * @n: integer to return
 * Return: returns int of squareroot
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (sqrt_h(i, n) == n && n != 1)
		return (-1);
	return (sqrt_h(i, n));
}
