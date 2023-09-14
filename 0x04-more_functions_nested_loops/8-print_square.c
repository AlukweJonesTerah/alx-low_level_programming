#include "main.h"
/**
 *print_square - prints a square
 *@size: the size of the square
 */
void print_square(int size)
{
	int i = size;
	int j = size;

	if (size > 0)
	{
		while (size--)
		{
			while (j--)
			{
				_putchar(35);
			}
			_putchar(10);
			j = i;
		}
	}
	else
	{
		_putchar(10);
	}
}
