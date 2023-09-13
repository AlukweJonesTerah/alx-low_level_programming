#include"main.h"
#include<ctype.h>
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 * Description: prints alphabet 10 times
 **/
void print_alphabet_x10(void)
{
	int j, i;
	char ch[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (j = 0; j < 10; j++)
	{
		for (i = 0; ch[i] != '\0'; i++)
		{
			ch[i] = tolower(ch[i]);
			_putchar (ch[i]);
		}
		_putchar ('\n');
	}
}

