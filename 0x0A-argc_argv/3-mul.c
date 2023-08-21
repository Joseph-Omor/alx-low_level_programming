#include <stdio.h>
#include <stdlib.h>

int multiply_numbers(int a, int b);
/**
 * main - A program that prints all its argument
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int result, num2, num1;
	/* Check if exactly two arguments are provided */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Convert arguments to integers */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = multiply_numbers(num1, num2);

	printf("%d\n", result);
	return (0);
}

/**
 * multiply_numbers - multiplies numbers
 * @a: integer to multiply
 * @b: integer to multiply
 *
 * Return: result of multiplication.
 */
int multiply_numbers(int a, int b)
{
	return (a * b);
}
