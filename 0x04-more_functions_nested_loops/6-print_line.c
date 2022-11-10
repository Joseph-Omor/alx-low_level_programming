#include "main.h"

/**
 * print_line - prints a straight line in the terminal 
 * @n: variable to check 
 */


void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');

}

