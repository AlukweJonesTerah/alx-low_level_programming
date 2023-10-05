#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * main -  a program that multiplies two positive numbers.
 * @argc: param1
 * @argv: param 2
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	long double num1, num2, result;

	if (argc != 3)
	{
		printf("Usage: %s number1: number2:\n", argv[0]);
		return (1);
	}
	num1 = strtod(argv[1], NULL);
	num2 = strtod(argv[2], NULL);
	if (num1 == 0 || num2 == 0)
	{
		printf("Invalid input. Please enter valid numbers.\n");
		return (1);
	}
	result = num1 * num2;
	printf("Result: %lf\n", result);
	return (0);
}
