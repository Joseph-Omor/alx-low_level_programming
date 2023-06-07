#include "main.h"

/**
 * _pow_recursion - A function that raises the power of x to exponent y
 * @x: base
 * @y: exponent
 *
 * Return: x raised to exponent y or -1 if y == 0
 */

int _pow_recursion(int x, int y)
{
	if (y <= 0)
	{
		return (-1);
	}

	return (x * _pow_recursion(x, y - 1));
}
