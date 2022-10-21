#include "main.h"
/**
* print_alphabet_x10 - this program prints alphabets in 10x
*
* return: 0
*/




void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)/* 97 or 'a', 122 or 'z' */
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
