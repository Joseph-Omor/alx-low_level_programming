#include "main.h"

/**
 * _strlen_recursion - Function returns the length of a string
 * @s: string argument
 *
 * Return: length of a string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length = length + 1;
		_strlen_recursion(s + 1);
		s++;
	}
	return (length);
}
