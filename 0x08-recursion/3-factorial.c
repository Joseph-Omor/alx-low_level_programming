#include "main.h"

/**
 * factorial - Returns the factorial of given number
 * @n: given number
 *
 * Return: -1 if n is negative (i.e less than 0), else 0 if n is 1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
