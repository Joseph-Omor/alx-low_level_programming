#include "3-calc.h"

/**
 * main - driver code for 0x0F #3
 * @argc: commandline argument count
 * @argv: pointer to commandline arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*operator)(int, int);
	int num1, num3, result;

	if (argc > 5 || argc < 2)
	{
		printf("Error\n");
		exit(98);
	}

	operator = get_op_func(argv[2]);
	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num3 = atoi(argv[3]);


	result = operator(num1, num3);

	printf("%d\n", result);

	return (0);
}
