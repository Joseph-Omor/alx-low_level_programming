#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - allocates memory
 * @b: variable used for malloc size
 *
 * Return: pointer to allocated memory, 98 if unsuccessful.
 */

void *malloc_checked(unsigned int b)
{
	char *ptr = NULL;

	ptr = malloc(sizeof(char) * b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return ((void *)ptr);
}
