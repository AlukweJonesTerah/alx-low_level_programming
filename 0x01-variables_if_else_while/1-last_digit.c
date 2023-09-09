#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - prints n value
 *
 * Return:  0 if success
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	a = n % 10;
	if (a > 5)
		printf("%d and is greater than 5", a);
	else if (a == 0)
		printf("%d and is 0", a);
	else
		printf("%d and is less then 6 and not 0", a);
	printf("\n");

	return (0);
}
