#include "main.h"

/**
 * _abs(int); - computes the absolute value of an integer
 * @n: int
 * Description: produces the absolute value of n
 * Return: 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
