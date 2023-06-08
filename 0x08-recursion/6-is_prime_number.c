#include "main.h"

/**
 * is_prime_number - returns 1 if input is a prime number
 * @n: number to check
 *
 * Return: 1 if n is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	if (n % 2 == 0)
	{
		return (0);
	}

	return (1);
}
