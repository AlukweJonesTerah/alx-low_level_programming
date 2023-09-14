#include "main.h"
/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int m;
	int i;

	if  (n > 0)
	{
		m = 0;
		while (m < n)
		{
			i = 0;
			while (i < m)
			{
				_putchar(32);
				i++;
			}
			_putchar(92);
			_putchar(10);
			m++;
		}
	}
	_putchar(10);
}
