#include "main.h"
#include <wchar.c>
/**
 * wildcmp - a function that compares two strings and
 * returns 1 if the strings can be considered identical,otherwise return 0.
 * @s1: parameter
 * @s2: parameter two
 * Description: checks for wild characters
 * Return: 1 if success
 */
int wildcmp(char *s1, char *s2)
{
	return (wcscmp(s1, s2));
}
