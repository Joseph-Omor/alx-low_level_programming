#include "main.h"
#include <stdlib.h>

/**
 * _strlen_recursion - Function returns the length of a string
 * @s: string argument
 *
 * Return: length of a string.
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
	{
		return (0);
	}
	length = _strlen_recursion(s + 1);

	return (1 + length);
}
