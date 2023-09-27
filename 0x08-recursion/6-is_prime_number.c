#include "main.h"
/**
 * is_prime - prime slev
 * @a: parameter
 * @b: parameter
 * Return: 0 if not and 1 if is a prime num
 */
int is_prime(int a, int b)
{
	if ((a % b) == 0 && b < a)
		return (0);
	if (a == b)
		return (1);
	else
		return (is_prime(a, b + 1));
}
/**
 * is_prime_number - a function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 * @n: parameter
 * Return: 0 if not and 1 if is a prime num
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
