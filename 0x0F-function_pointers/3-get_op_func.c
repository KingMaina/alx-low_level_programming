#include "2-calc.h"

/**
* (*get_op_func) - Selects an appropriate function
* based on the operator
* @s: A mathematical operator
*
* Return: A pointer to a function corresponding to
* the chosen operator.
*/
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

	i = 0;
	while (ops[i])
	{
		if (ops[i][0] == s)
		{
			return ((*)(int ,int) = ops[i][1]);
		}
		i++;
	}
	return (NULL);
}
