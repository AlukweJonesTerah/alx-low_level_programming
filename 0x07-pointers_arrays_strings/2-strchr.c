#include "main.h"
#include <stdio.h>
/**
 * *_strchr - a function that locates a character in a string.
 *
 * @s: string to search
 * @c: char to find
 *
 * Return: pointer to the first occurence of c in str s or NUll if not
 */
char *_strchr(char *s, char c)
{
	for (; 1; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == 0)
		{
			return (0);
		}
	}
}
