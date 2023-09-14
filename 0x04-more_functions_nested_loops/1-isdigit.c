#include "main.h"
/**
 * _isdigit - checks for digits from 0 to 9
 * @c: holds the values
 * Return: 1 for true results 0 for false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
