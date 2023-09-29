#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include "main.h"
/**
 * main - adds positive numbers
 * @argc: argument
 * @argv: arguement vector
 * Return:0 success
 */
int main(int argc, char *argv[])
{
	int a, i = 1, j;

	j = 0;
	while (i < argc)
	{
		for (a = 0; argv[i][a] != '\0'; a++)
		{
			if (!isdigit(argv[i][a]))
			{
				puts("Error");
				return (1);
			}
		}
			j  += atoi(argv[i]);
			i++;
	}
	printf("%d\n", j);
	return (0);
}
