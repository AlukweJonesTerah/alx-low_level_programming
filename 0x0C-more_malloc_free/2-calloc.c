#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: memory for an array
 * @size: asigned
 * Return: 0 when success or null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *j;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = (char *)malloc(nmemb * size);
	if (j == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; ++i)
	{
		j[i] = 0;
	}
	return (j);
}
