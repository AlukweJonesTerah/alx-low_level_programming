#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - selects the correct function
 * to perform the operation asked by the user
 * @s: perator passed as argument to the program
 * Return: func
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].f; i++)
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
			return (ops[i].f);
	}

	printf("Error\n");
	exit(99);
}
