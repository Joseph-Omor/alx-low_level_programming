#include "main.h"
/**
 * print_alphabet - prints alphabets using ASCII representations
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)/* 97 or 'a', 122 or 'z'*/
	{
		_putchar(i);
	}
	_putchar('\n');
}
