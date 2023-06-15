#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *  str_concat - function returns a pointer to a new string copy of string
 * @s1: string
 * @s2: string
 *
 * Return: pointer to newly allocated sting,
 * Null if s1 or s2 is NULL or malloc is unsuccessfull
 */

char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	int total_len;
	char *result;

	if (s1 == NULL)
	{
		return (s1);
	}

	if (s2 == NULL)
	{
		return (s2);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	total_len = len1 + len2 + 1;

	result = malloc(total_len);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	result[total_len] = '\0';

	return (result);
}
