#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: The number or elements in the array.
 * @size: The size of each element.
 *
 * Return: Pointer to the allocated memory. or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Allocate memory for nmemb elements of size bytes each */
	ptr = malloc(sizeof(size) * nmemb);

	/* Check for malloc failure */
	if (ptr ==  NULL)
	{
		return (NULL);
	}

	/* Set allocated memory to zero */
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
