#include <stdio.h>
/**
 * main - prints _putchar using the _putchar function
 *
 * Return: 0 is success
 */
int main(void)
{
	char string[8] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(string[i]);
		++i;
	}
	_putchar(10);
	return (0);
}
