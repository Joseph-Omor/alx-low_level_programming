#include "function_pointers.h"
#include "3-calc.h"


/**
 * get_op_func - function that calls appropraite operator
 * @s: symbol passed as operator
 *
 * Return: Pointer to function that corresponds to operator given. NULL if no
 * match found
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;

	while (ops[i].op != NULL && *ops[i].op != *s)
	{
		i++;
	}
	return (ops[i].f);

}
