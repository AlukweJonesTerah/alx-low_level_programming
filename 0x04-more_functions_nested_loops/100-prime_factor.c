#include <stdio.h>
#include <math.h>
/**
 * main - prime numbers
 *
 * Return: 0 when success
 */
int main(void)
{
	long int i, j, k = 612852475143;

	while (i != 1)
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
			break;
		}
		k = (i / j);
		i = k;
	}
	printf("%li\n", j);
	return (0);
}
