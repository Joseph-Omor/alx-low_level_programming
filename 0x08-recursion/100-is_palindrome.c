#include "main.h"
#include <string.h>

/**
 * is_palindrome - checkes if string is a palindrome
 * @s: string to check
 *
 * Return: 0 if not and 1 if palindrom
 */

int is_palindrome(char *s)
{
	int i, j;
	int len;

	len = strlen(s);

	if (len == 0)
	{
		return (1);
	}

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}

	return (1);
}
