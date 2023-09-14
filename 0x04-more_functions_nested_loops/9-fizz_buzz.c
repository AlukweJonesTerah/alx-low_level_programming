#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 *
 * Return: 0 when successful
 */
int main(void)
{
	int a = 1;

	while (a < 100)
	{
		if (a % 5 == 0 && a % 3 == 0)
			printf("FizzBuzz");
		else if (a % 5 == 0)
			printf("Buzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else
			printf("%d", a);
		a++;
	}
	printf("Buzz\n");
	return (0);
}
