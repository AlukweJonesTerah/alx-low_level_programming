#include<stdio.h>
/**
 * main - entry point.
 * Description: returns the fibonacci of 100 series.
 * Return: Always 0 (success)
 */
int main(void)
{
	int counter = 2;

	float a = 1;
	float b = a + 1;
	float c = a + b;

	printf("%.0f, ", a);
	printf("%.0f, ", b);
	while (counter < 98)
	{
		c = a + b;
		printf("%.0f", c);
		counter++;
		if (counter != 98)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
