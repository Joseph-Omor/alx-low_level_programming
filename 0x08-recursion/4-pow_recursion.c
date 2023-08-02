#include "main.h"

/**
 * _pow_recursion - A function that returns the value of variable x raised to y
 * @x: integer variable
 * @y: integer variable
 *
 * Return: -1 if y is lower than 0, 1 if 0 and x raised to power y if greater
 * than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
