#include <stdio.h>

/**
 * _strlen - finds the lenght of a string
 * @n: variable to loop through string
 *
 * Return lenght of string
 */

int _strlen(char *s)
{
	int n = 0;

	while ( s[n] != '\0' )
	{
		n++;
	}
	return (n);
}
	

