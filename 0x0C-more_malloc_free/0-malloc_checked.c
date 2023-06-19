#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - allocates memory
 * @b: unused variable
 *
 * Return: pointer to allocated memory, 98 if unsuccessful.
 */

void *malloc_checked(__attribute__((unused))unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(*ptr));

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
