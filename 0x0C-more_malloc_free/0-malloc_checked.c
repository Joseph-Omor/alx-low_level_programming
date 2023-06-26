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
	void *ptr = NULL;

	ptr = malloc(sizeof(ptr) * b);

	if (ptr == NULL)
	{
		exit(98);
	}
	
	return (ptr);
}
