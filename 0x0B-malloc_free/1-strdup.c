#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a new string copy of string
 * @str: string
 *
 * Return: pointer to new sting, Null if str is NULL or malloc is unsuccessfull
 */

char *_strdup(char *str)
{
	char *sptr;

	if (str == NULL)
	{
		return (NULL);
	}

	sptr = malloc(sizeof(char) + 1);

	if (!sptr)
	{
		return (NULL);
	}

	strcpy(sptr, str);

	return (sptr);
}
