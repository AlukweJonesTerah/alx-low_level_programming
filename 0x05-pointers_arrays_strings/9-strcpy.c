#include "main.h"
/**
 *_strcpy - opies the string pointed to by src,
 * @dest: pointer to be returned
 * @src: pointer to bepointed to by src
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
