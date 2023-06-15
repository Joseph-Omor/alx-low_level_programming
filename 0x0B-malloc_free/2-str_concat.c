#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *  str_concat - function returns a pointer to a new string
 *  with concatenated copy of passed strings
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
	char *result;

	if (s1 != NULL)
	{
		len1 = strlen(s1);
	}

	if (s2 != NULL)
	{
		len2 = strlen(s2);
	}

	result = malloc(len1 + len2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		strcpy(result, s1);
	}
	else
		*result = '\0';
	
	if (s2 != NULL)
	{
		strcat(result, s2);
	}
	
	return (result);
}
