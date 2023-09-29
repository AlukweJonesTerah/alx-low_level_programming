#include "main.h"
#include <stdlib.h>
/**
 * _atoi - convert a string to an integer
 * @s: pointer
 * Description: converts string to integeer
 * Return: 0 (success)
 */
int _atoi(char *s)
{
	int a = 1;
	int c = 0;
	int b = 0;
	int i = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
			a *= -1;
		}
		while (s[i] > 48 && s[i] <= 57)
		{
			b = 1;
			c = (c * 10) + (s[i] - '0');
			i++;
		}
		if (b == 1)
		{
			break;
		}
		i++;
	}
	c *= a;
	return (c);
}
