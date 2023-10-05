#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * array_range -  a function that creates an array of integers.
 * @min: min value
 * @max: largest
 * Return: 0 when success or null
 */
int *array_range(int min, int max)
{
	int *j;
	unsigned int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	j = (int *)malloc(size * sizeof(*j));
	if (j == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size && min <= max; i++, min++)
	{
		j[i] = min;
	}
	return (j);
}
