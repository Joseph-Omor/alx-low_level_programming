#include "3-calc.h"

/**
 * op_add - function that adds two integers
 * @a: integer to add
 * @b: integer to add
 *
 * Return: the sum of two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that subtracts two integers
 * @a: integer to sub
 * @b: integer to sub
 *
 * Return: the subtration of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies two integers
 * @a: integer to multiply
 * @b: integer to multiply
 *
 * Return: the multiplication of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides two integers
 * @a: integer to divide
 * @b: integer to divide
 *
 * Return: the sum of two integers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that mods two integers
 * @a: integer to mod
 * @b: integer to mod
 *
 * Return: the modulo of two integers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}


