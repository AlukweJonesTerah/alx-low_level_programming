#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: 0 when success
 */
int main(void)
{
	int i;
	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf("%.0f, %.0f, ", a, b);
	for (i = 2; i < 98; i++)
	{
		if (i != 98)
		{
			printf(",");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
