#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
/**
 * _pow_recursion - a function that returns
 * the value of x raised to the power of y.
 * @x: value raised
 * @y: value used to rise
 * Description: prints power of a number
 * Return: pow
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
