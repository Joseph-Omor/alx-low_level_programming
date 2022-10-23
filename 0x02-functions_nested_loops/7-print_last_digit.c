#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @n: int type number
 * Return: return value of last digit
 */
int print_last_digit(int n)
{
	int nc;

	if (n < 0)
	{
		nc = -1 * (n % 10);
		_putchar(nc + '0');
		return (nc);
	}
	else
	{
		nc = n % 10;
		_putchar(nc + '0');
		return (nc);
	}
}
