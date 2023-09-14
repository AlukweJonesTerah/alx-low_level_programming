#include <main.h>
/**
 * positive_or_negative - returns valule of i
 *@i: int value
 * Return: 0 is success
 */
/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
	/* your code goes there */
	if  (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);

	return (0);
}
