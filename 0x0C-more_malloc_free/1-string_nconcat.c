#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string argument to concatenate
 * @s2: second string argument
 * @n: number of bytes to obtain from second string
 *
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len_s1, len_s2, concat_length;
	char *result;

	/* Treat NULL strings as empty strings */
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	/* Get length of s1 and s2 */
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	/* Determine the actual number of characters to concatenate from */
	if (len_s2 < n)
	{
		concat_length = len_s2;
	}
	else
	{
		concat_length = n;
	}
	/* Allocate memory for the concatenated string (+1 for Null-byte*/
	result = (char *)malloc((len_s1 + concat_length + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	/* Copy characters from s1 and s2 to the concatenated string */
	memcpy(result, s1, len_s1);
	memcpy(result + len_s1, s2, concat_length);

	/* Null-termninate the string */
	result[len_s1 + concat_length] = '\0';

	return (result);
}
