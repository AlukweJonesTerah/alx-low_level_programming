#include "main.h"
/**
 * _strncat - concatenates n bytes from a string to another
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: dest pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (; dest[i]; i++)
	{

	}
	for (; j < n && src[j] != 0; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
