#include "main.h"
/**
 * string_toupper - a function that encodes a string using rot13
 *
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int i;
	int m;
	char a1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstivwxyz";
	char a2[] ="NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (m = 0; m < 52; m++)
		{
			if (s[i] == a1[m])
			{
				s[i] = a2[m];
				break;
			}
		}
	}
	return (s);
}
