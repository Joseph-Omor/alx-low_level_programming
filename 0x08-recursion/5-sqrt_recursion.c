#include "main.h"

/**
 * _sqrt_recursion - A function that returns the square root of a number
 * @n: number to compute
 *
 * Return: if n < 0 or == 0 return -1, return square of number
 */
int _sqrt_recursion(int n)
{
	int sqrt; 
	int updated_n;	

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}
	
	updated_n = n / 2;
	sqrt = _sqrt_recursion(updated_n);
	return (sqrt);
}
