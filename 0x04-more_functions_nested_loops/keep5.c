#include "main.h"

/**
* more_numbers - print 0 to 14 10 times
*
* Return: void
*/

void more_numbers(void)
{
	char c, i;

	for(c = 0; c <= 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (c >= 10)
				_putchar('1');
			_putchar (c % 10 + '0');
		}
		_putchar('\n');
	}
}
