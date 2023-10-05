#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter.
 * @str: pointer
 * Return: 0 success
 */
char *_strdup(char *str)
{
	char *j;
	unsigned int i, size = 0;

	j = (char *)malloc(size + 1 * sizeof(char));
	if (str == 0)
	{
		return (0);
	}
	while (str[size] != 0)
	{
		size++;
	}
	if (j == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			j[i] = str[i];
		}
		return (j);
	}
	return (0);
}
