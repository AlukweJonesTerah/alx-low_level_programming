#include <stdio.h>
#include "main.h"
/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: pointer to address of variable a
 * @b: pointer to address of variable b
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
