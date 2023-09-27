#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * factorial - a function that returns the factorial of a given number.
 * Description: prints factorial of n
 * @n:  is lower than 0
 * Return: -1 if below 0, 1 if 0 or 1 else !
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
