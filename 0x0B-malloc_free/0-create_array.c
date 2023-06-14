#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char and initialize with a specific char
 * @size: size to use
 * @c: character to assign to array
 *
 * Return: pointer to created arrar
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size - 1; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}

