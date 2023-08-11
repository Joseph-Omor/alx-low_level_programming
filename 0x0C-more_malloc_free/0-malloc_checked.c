#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: parameter to use as size
 *
 * Return: Pointer to newly allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
