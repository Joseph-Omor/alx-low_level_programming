#include "3-calc.h"

/**
 * get_op_func - compares string with options to choose appropriate function
 * @s: inputed string to use as operator
 * @ops = array of struct op_t
 *
 * Return: function pointer to corresponding operator
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

	while (ops[i].op != NULL)
	{
		if ((*(ops[i].op) == *s) && strlen(s) < 2)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
