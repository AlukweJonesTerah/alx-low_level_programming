#include "main.h"
#include <stdio.h>
/**
 * _memset - a function that fills memory with a constant byte
 *
 * @n: buffer size
 * @s: byte of the memory area pointed
 * @b: the constant byte
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(s + a) = b;
		a++;
	}
	return (s);
}
