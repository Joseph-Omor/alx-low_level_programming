#include "3-calc.h"

/**
 * main- driver code for the calc program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 98 for less than 4, 99 for no operator, 100 for / or % by 0.
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char *operator;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);
	operator = argv[2];

	op_func = get_op_func(operator);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*operator == '/' || *operator == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op_func(arg1, arg2);
	printf("%d\n", result);

	return (0);
}
