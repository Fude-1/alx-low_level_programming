#include "3-calc.h"

/**
 * get_op_func - Selects correct function to perfom the
 *	- operation asked by the user.
 * @s: The operator given by the user.
 *
 * Return: pointer to the fucntion that
 *	- corresponds to the operator given as parameter.
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

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
