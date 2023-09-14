#include "main.h"
/**
 *_isupper - Checks for upperase aphlabets
 *@c: holds the values
 *Return: 1 if true  else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
