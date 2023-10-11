#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: arguments
 * @argv: array of args
 * Return: return something
 */
int main(int argc, char *argv[])
{
	int i;
	int c;
	int (*func)(int, int);
	
	i = atoi(argv[1]);
	c = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '%' || *argv[2] == '/') && c == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", func(i, c));
	return (0);
}
