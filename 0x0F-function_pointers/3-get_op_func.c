#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * get_op_func - Returns a pointer to the appropriate operation function.
 * @s: The operator as a string.
 * Return: A pointer to the corresponding operation function.
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
	int i = 0;

	while (ops[i].op)
	{
		if (*ops[i].op == *s && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
