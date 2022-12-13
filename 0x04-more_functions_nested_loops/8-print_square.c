#include "main.h"
/**
 * print_square -  print squares
 * @size: size of square
 * Description: can only use _putchar to print
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
