#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - A program that calculates the value of it's arguments based on
 * specified operator
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98, 99, or 100 on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	/* pass operator for function selection */
	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* check value of argument arrays and handle appropraitely */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if ((argv[2][0] == '*' && argv[2][1]))
	{
		printf("Error\n");
		exit(99);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}