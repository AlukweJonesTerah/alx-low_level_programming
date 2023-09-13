#include "main.h"
/**
 * print_alphabet_x10 - prints 10 time the lowercase alphabets
 *
 * Return 0 when success
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char j = 'a';

	while (i < 10)
	{
		while (j <= 'z')
		{
			_putchar(j);
			++j;
		}
		j++;
	}
}
