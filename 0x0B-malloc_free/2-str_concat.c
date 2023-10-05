#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return: result NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *j;
	unsigned int i = 0, size = 0, size1 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[size])
	{
		size++;
	}
	while (s2[size1])
	{
		size1++;
	}
	j = (char *)malloc((size + size1 + 1) * sizeof(char));
	if (j == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		j[i] = s1[i];
	}
	for (i = 0; i < size1; i++)
	{
		j[size + i] = s2[i];
	}
	j[size + size1] = '\0';
	return (j);
}
