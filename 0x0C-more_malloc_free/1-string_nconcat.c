#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: space in memory 1,
 * @s2: space in memory 2
 * @n:  bytes of s2, and null terminated
 *
 * Return: pointer to the concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	ptr = malloc(len1 + n + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
		ptr[i++] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
