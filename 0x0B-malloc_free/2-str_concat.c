#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: string argument
 * @s2: string argument
 *
 * Return: Pointer to concatenated string or NULL if malloc fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len;
	/* Handle NULL strings as empty strings */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	/* Calculate lengths of s1 and s2 */
	len = strlen(s1) + strlen(s2);

	concatenated = malloc(sizeof(char *) * len + 1);
	if (concatenated == NULL)
	{
		return (NULL);
	}

	/* Copy the contents of s1 and s2 to concatenated */
	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
