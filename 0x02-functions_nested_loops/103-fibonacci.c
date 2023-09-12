#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: 0 is success
 */
int main(void)
{
	int i;
	int j = 1, k = 2, sum = 0;

	for (; k < 4000000;)
	{
		if (k % 2 == 0)
			sum += k;

		i = k;
		k += i;
		i =  k;
	}
	printf("%d\n", sum);
	return (0);
}
