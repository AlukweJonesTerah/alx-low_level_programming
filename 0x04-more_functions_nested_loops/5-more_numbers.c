#include "main.h"
/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int j = 48;
	int count = 0;
	int i = 0;

	while (count < 10)
	{
		while (j <= 62)
		{
			if  (j > 57)
			{
				i = 10;
				_putchar(49);
			}
			_putchar(j - i);
			j++;
		}
		j = 48;
		i = 0;
		count++;
		_putchar(10);
	}
}
