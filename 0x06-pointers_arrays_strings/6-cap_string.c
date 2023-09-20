#include "main.h"
/**
 * cap_string - a function capitalizes word of a string
 *
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i = 0, j;
	char sc[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (i == 0 && s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
			}
			if (s[i - 1] == sc[j])
			{
				if ((*(s + i) >= 97) &&  (*(s + i) <= 122))
					*(s + i) -= 32;
			}
		}
	}
	return (s);
}
