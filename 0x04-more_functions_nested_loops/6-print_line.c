#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar(95);
		}
	}
	_putchar(10);
}
