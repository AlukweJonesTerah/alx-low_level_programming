#include <stdio.h>
/**
 * main - prints lowercase and uppercase alphabets
 *
 * Return: 0 is return if success
 */
int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (j = 'A'; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');

	return (0);
}
