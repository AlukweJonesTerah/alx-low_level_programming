#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -  multiplies two numbers
 * @argc: arguement count
 * @argv: array of pointers to CLI arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("%s\n", "Error\n");
		return (1);
	}
	else
	{
		 mul = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);
		 printf("%d\n", mul);
	}
	return (0);
}
