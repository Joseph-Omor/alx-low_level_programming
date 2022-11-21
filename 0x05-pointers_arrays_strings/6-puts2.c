#include <stdio.h>
#include "main.h"

/**
 * puts2 - print every other charater
 * @str: iteration variable
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
