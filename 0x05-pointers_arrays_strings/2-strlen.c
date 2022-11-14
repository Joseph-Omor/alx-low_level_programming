#include <stdio.h>

/**
 * _strlen - finds the lenght of a string
 * @s: recieved string pointer
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
