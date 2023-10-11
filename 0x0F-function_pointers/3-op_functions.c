#include "3-calc.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * op_add - addition prototype function
 * @a: param1
 * @b: param2
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return ((a + b));
}
/**
 * op_sub - subtraction prototype function
 * @a: param1
 * @b: param2
 * Return: sub of a and b
 */
int op_sub(int a, int b)
{
	return ((a - b));
}

/**
 * op_mul - mutiplication prototype function
 * @a: param1
 * @b: param2
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return ((a * b));
}

/**
 * op_div - prototype
 * @a: par
 * @b: par
 * Description: returns div
 * Return: div
 */
int op_div(int a, int b)
{
	/*check for 0 division*/
	if (b == 0)
	{
		printf("Cannot divide by %d\n", b);
		exit(100);
	}
	else
	{
		return ((a / b));
	}
}

/**
 * op_mod - prototype
 * @a: par
 * @b: par
 * Description: returns remainder
 * Return: mod
 */
int op_mod(int a, int b)
{
	return ((a % b));
}
