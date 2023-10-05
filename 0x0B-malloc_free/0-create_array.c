#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: param
 * @c: param
 * Return: 0 success
 */
char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int i;

	j = (char *)malloc(size * sizeof(char));
	if (size == 0)
	{
		return (0);
	}
	if (j == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			j[i] = c;
		}
		return (j);
	}
	return (0);
}
