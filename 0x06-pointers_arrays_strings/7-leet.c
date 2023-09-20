#include "main.h"
/**
 * leet - a function that encodes a string in 1337
 *
 * @s: string t be encoded
 *
 * Return: the resulting string
 */
char *leet(char *s)
{
	int i, a, c = 0;
	int m[5] = {97, 101, 111, 116, 108};
	int code[5] = {4, 3, 0, 7, 1};

	for (i = 0; *(s + i); i++)
	{
		for (a = 0; a < 5; a++)
		{
			c = m[a] - 32;
			if (s[i] == m[a] || s[i] == c)
			{
				s[i] = code[a] + 48;
			}
		}
	}
	return (s);
}
