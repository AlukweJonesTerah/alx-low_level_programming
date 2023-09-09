#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 is success
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (i != 0 || j != 1)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i + '0');
			putchar(j + '0');
		}
	}
	putchar('\n');
	return (0);
}
