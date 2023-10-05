#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * strtow- a function that splits a string into words.
 * @str: param
 * Return: 0 when success
 */
char **strtow(char *str)
{
	char *j;
	int n, i;

	n = strlen(str) + 1;
	if (str == NULL)
	{
		return (NULL);
	}
	j = (char *)malloc(4193 * sizeof(char));
	if (j == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; ++i)
	{
		if (str[i] == '\0' || str[i] == ' ')
		{
			j[i] = '\n';
		}
		j[i] = str[i];
	}
	printf("%s\n", j);
	return ((char **)j);
}
