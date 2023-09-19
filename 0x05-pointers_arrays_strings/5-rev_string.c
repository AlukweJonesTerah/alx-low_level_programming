#include "main.h"
/**
 * rev_string - unction that reverses a string.
 * @s: pointer
 */
void rev_string(char *s)
{
	int a = 0;
	int i = 0;
	char c;

	while (s[a] != '\0')
	{
		a++;
	}
	for (; i < a - 1; i++)
	{
		c = s[i];
		s[i] = s[a - 1];
		s[a - 1] = c;
		a--;
	}
}
