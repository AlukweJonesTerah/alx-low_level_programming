#include "main.h"
/**
 * string_toupper - a function that changes all
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if ((*(s + i) >= 97) &&  (*(s + i) <= 122))
		{
			*(s + i) = *(s + i) - 32;
		}
	}
	return (s);
}
