#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - A function that returns a pointer to copy of given string
 * @str: string argument
 *
 * Return: pointer to newly allocated space or NULL if str is NULL or malloc
 * unsuccessful.
 */
char *_strdup(char *str)
{
	size_t len = 0;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	new_str = malloc(sizeof(char) * len + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	strcpy(new_str, str);
	return (new_str);
}

