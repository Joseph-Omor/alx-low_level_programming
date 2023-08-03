#include "main.h"

/**
 * is_prime_number_helper - a helper function to check prime numbers
 * @n: integer
 * @divisor: prime number divisor
 *
 * Return: 0, 1 or result of recursive call
 */
int is_prime_number_helper(int n, int divisor)
{
	/* Base case: if the divisor reaches 1, the number is prime. */
	if (divisor == 1)
	{
		return (1);
	}

	/* If the number is divisible by any other divisor, it is not prime */
	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_number_helper(n, divisor - 1));
}




/**
 * is_prime_number - A function that returns 1 if input is prime number,
 * otherwise 0.
 * @n: integer argument
 *
 * Return: 1 if n is prime number, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_number_helper(n, n - 1));
}
