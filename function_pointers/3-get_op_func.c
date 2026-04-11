#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - returns the correct function for the operator
 * @s: the operator passed by the user
 *
 * Return: pointer to the right function, or NULL if not found
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

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
