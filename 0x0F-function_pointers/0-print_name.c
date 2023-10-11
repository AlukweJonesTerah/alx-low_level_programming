#include <stdio.h>
/**
 * print_name - a function that prints a name.
 *
 * @name: Param1
 * @f: param function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
