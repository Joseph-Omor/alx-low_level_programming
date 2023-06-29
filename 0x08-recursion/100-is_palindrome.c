#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * is_palindrome - checkes if string is a palindrome
 * @s: string to check
 *
 * Return: 0 if not and 1 if palindrome
 */
int is_palindrome(char *s)
{
	int length, result;
	char *substring = NULL;

	if (s == NULL)
	{
		return (0);
	}

	length = strlen(s);

	/* Base case: if the length is 0 or 1, it's a palindrome */
	if (length <= 1)
	{
		return (1);
	}
	/* Compare the first and last characters */
	if (s[0] != s[length - 1])
	{
		return (0);
	}

	/* Create a copy of the string without the first and last characters */
	substring = malloc(sizeof(length) - 1);
	strncpy(substring, s + 1, length - 2);
	substring[length - 2] = '\0';


	/* Recursively check the substring */
	result = is_palindrome(substring);

	free(substring);

	return (result);
}
