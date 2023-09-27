#include "main.h"
/**
 * leng - returns increment of a if s is a pointer
 * @s: string
 * Return: string length, 0 if true
 */
int leng(char *s)
{
	int a = 0;

	if (*s)
	{
		a = a + leng(s + 1);
		return (a += 1);
	}
	return (0);
}
/**
 * palind - returns 0 if pointer s is not qual to s - 1
 * @i: integer i
 * @s: string
 * Return: int value
 */
int palind(int i, char *s)
{
	if (*s)
	{
		if (*s != s[leng(s) - i])
		{
			return (0);
		}
		else
		{
			return (palind(i + 1, s + 1));
		}
	}
	return (1);
}
/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: string to check
 * Return: boolean
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (palind(i, s));

}
