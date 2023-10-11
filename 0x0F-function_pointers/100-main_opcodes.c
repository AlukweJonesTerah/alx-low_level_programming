#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: args
 * @argv: args
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int k, i;
	char *array;

	i = 0;
	k = atoi(argv[1]);
	array = (char *)main;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (k < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < k)
	{
		i++;
		if (i == k - 1)
		{
			printf("%02hhx\n", array[i]);
			break;
		}
		printf("%02hhx ", array[i]);
	}
	return (0);
}
