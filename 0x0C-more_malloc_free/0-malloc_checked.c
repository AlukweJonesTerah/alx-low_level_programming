#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * malloc_checked -  a function that allocates memory using malloc.
 * @b : unsigned value
 * Return: 0 when success or null
 */
void *malloc_checked(unsigned int b)
{
	void *j;

	j = malloc(b);
	if (j == NULL)
	{
		exit(98);
	}
	return (j);
}
