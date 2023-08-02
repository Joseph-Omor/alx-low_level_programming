#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion_helper - A helper function that takes two integers n and
 * guess and perfroms square root approximation using Newton's method.
 * @n: integer argument
 * @guess: integer argument
 *
 * Return: -1 if...
 */
int _sqrt_recursion_helper(int n, int guess)
{
	int new_guess;

	new_guess = (guess + n / guess) / 2;

	/**
	 * if the new_guess and previous guess are very close, consider it as
	 * an approximation
	 */
	if (new_guess == guess || new_guess == guess + 1)
	{
		/* verify the square root by squaring the approximation. */
		if (new_guess * new_guess == n)
		{
			return (new_guess);
		}
		else
		{
			/**
			 * return -1 if the approximation is not a perfect
			 * square
			 */
			return (-1);
		}
	}

	return (_sqrt_recursion_helper(n, new_guess));
}

/**
 * _sqrt_recursion - a function that returns the natural square root of a
 * number
 * @n: integer argument
 *
 * Return: natural square root or -1 if no natural square root for n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_recursion_helper(n, n / 2));
	}
}
