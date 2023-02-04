#include "main.h"

/**
 * _strcmp - compares to strings
 * @s1: string
 * @s2: string
 * Return: 15 if greater, -15 if less than or zero if equals
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
