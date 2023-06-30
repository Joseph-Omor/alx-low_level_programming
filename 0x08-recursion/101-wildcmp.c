#include "main.h"
#include <string.h>

/**
 * wildcmp - A function that compares two strings
 * @s1: string to compare
 * @s2: string to compare
 *
 * Description: s2 can contain the character '*'. char '*' can replace any
 * string(including an empty string)
 * Return: 1 if string is considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (s1 == NULL || s2 == NULL)
	{
		return (0);
	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (wildcmp(s1 + 1, s2)));
	}
	else
	{
		return (0);
	}
}
