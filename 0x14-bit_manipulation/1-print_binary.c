#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number passed as argument
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		/* Recursive call to print the binary representation */
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
