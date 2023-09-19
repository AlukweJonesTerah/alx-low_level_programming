#include "main.h"
#include <stddef.h>
/**
 *_strlen - Write a function that returns the length of a string.
 *@s: pointer to characters
 *
 * Return: 0 when success
 */
int _strlen(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}
