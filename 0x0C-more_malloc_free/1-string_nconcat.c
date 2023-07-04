#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - A function that concatenates two strings
 * @s1: string argument
 * @s2: string argument
 * @n: number of bytes to allocate
 *
 * Return: pointer to newly allocated space containg concatenated string,
 * NULL if unsuccessful
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, concatLen;
	char *concatenated;

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}

	concatLen = len1 + n + 1;

	concatenated = malloc(sizeof(char) * concatLen);

	if (concatenated == NULL)
	{
		return (NULL);
	}

	strncpy(concatenated, s1, len1);
	concatenated[len1] = '\0';
	strncat(concatenated, s2, n);
	concatenated[concatLen - 1] = '\0';

	return (concatenated);
}
