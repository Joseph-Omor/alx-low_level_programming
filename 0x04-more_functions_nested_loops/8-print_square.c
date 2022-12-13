#include "main.h"
/**
 * print_square -  print squares
 * @size: size of square
 * Description: can only use _putchar to print. Use # to print square
 */
void print_square(int size)
{
	int i, j;

	j = 0;
	if (size < 1)
		_putchar('\n');

	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
