#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: 0 is success
 */
int main(void)
{
	int i;
	int j = 0, k = 1, sum = 0;

	for (i = 0; i < 4000000; i = j + k)
	{
		if (k % 2 == 0)
			sum += i;

		j = k;
		k += i;
		i =  k;
	}
	printf("%d\n", sum);
	return (0);
}
