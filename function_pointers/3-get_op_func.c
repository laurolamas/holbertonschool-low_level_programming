#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - Get operator function
 *
 * @s: operator
 *
 * Return: Pointer to the function that corresponds to the operator s
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

	if (!s)
		return (NULL);

	while (i < 6)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
