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
	char *duplicate;
	int lenght;

	if (str == NULL)
	{
		return (NULL);
	}
	
	lenght = strlen(str) + 1;
	duplicate = malloc(sizeof(char) * lenght);

	if (!duplicate)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
