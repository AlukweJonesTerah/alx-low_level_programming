#include "lists.h"
void print(void) __attribute__ ((constructor));
/**
 * print - function executed before main
 * is excuted.
 * Return: no return.
 */
void print(void)
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
