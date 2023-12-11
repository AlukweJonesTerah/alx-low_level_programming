#include "main.h"
/**
 * _memcpy -  Copies n bytes src to dest
 * @dest: Pointer to destination location
 * @src: Pointersource location
 * @n: number of bytes to be copied
 * Return: Pointer to memory dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = *(src + a);
	}
	return (dest);
}
