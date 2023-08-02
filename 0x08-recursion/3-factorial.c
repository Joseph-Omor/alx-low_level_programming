#include "main.h"

/**
 * factorial - returns the factorial of given number
 * @n: integer argument
 *
 * Return: factorial of given number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
