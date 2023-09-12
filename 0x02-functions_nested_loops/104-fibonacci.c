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
	unsigned long int a1, a2, a3;
	unsigned long b1 = 0, b2 = 1, b3 = 0, b4 = 2;

	printf("%lu, %lu, ", b2, b4);
	for (i = 2; i < 98; i++)
	{
		if (b2 + b4 > LARGEST || b3 > 0 || b1 > 0)
		{
			a1 = (b2 + b4) / LARGEST;
			a2 = (b2 + b4) % LARGEST;
			a3 = b1 + b3 + a1;
			b1 = b3, b3 = a3;
			b2 = b4, b4 = a2;
			printf("%lu%010lu", b3, b4);
		}
		else
		{
			a2 = b2 + b4;
			b2 = b4, b4 = a2;
			printf("%lu", b2);
		}
		if (i != 97)
			printf(",");
	}
	printf("\n");
	return (0);
}
