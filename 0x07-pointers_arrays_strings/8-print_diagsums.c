#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: square matrix of which we print the sum of diagonals
 *  @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sumA = 0, sumB = 0;

	while (i < size)
	{
		sumA += a[(size * i) + i];
		sumB += a[(size * (i + 1)) - (i + 1)];
		i++;
	}
	printf("%d, %d\n", sumA, sumB);
}
