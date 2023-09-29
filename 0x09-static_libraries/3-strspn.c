#include "main.h"
/**
 * *_strspn - gets the length of a prefix substring
 *
 * @s: string to evaluate
 * @accept: string containing the list of char to match in s
 *
 * Return:the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, m = 0, i = 0;

	for (a = 0; *(s + a) != 0; a++)
	{
		m = 0;
		for (b = 0;  *(accept + b) != 0; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				i++;
				m = 1;
			}
		}
		if (m == 0)
			return (a);
	}
	return (0);
}
