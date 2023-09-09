#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 is success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10 ; i++)
	{
		if (i > 0 && i <= 9)
		{
			putchar(',');
			putchar(' ');
		}
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
