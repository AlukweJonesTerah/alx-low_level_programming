#include "main.h"
/**
 * puts_half - print the second half of the string
 *@str: pointer
 */
void puts_half(char *str)
{
	int j = 0;
	int k;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 0)
	{
		k = j / 2;
	}
	else
	{
		k = (j - 1) / 2;
		k += 1;
	}
	for (; k < j; k++)
	{
		_putchar(str[k]);
	}
	_putchar(10);
}
