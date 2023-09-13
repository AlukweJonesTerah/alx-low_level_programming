#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *
 * Return: 0 if success
 */
int main(void)
{
	int i = 2;
	long int k = 1, j = 2;
	long int m;

	printf("%lu, ", k);
	for (; i <= 50; i++)
	{
		if (i == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		m = j;
		j += k;
		k = m;
	}
	return (0);
}
