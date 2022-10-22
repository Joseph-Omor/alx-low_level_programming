#include "main.h"

/**
 * print_sign - prints the the sign of a number
 * @n: typ int can be negative or positive
 * Description: print +, 0, or - depending on number, along with return
 * Return: 1 if greater than zero, 0 if zero and -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
