#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: param
 * @av: param
 * Return: pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len = 0;
	int total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		total_len += len;
		len = 0;
	}
	total_len += ac + 1;
	str = (char *)malloc(total_len * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
