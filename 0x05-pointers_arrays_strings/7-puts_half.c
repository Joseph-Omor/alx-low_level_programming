#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints last half of string
 * @str: pointer to string
 *
 */

void puts_half(char *str)
{
	int i, n, k;

	for (i = 0; str[i] != '\0'; i++)
		;
	i = i - 1;

	n = i / 2;

	k = i;

	for (; i != n; i--)
		;
	i = i + 1;

	for (; i <= k; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}









