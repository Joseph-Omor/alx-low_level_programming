#include "main.h"


/**
 * _calloc - A function that allocates memory for an array
 * @nmemb: number of array elements to allocate
 * @size: size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *allocated_memory;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/* Calculate total memory size */
	total_size = nmemb * size;

	allocated_memory = malloc(total_size);
	if (allocated_memory == NULL)
	{
		return (NULL);
	}

	/* Set allocated memory to zero using memset */
	memset(allocated_memory, 0, total_size);

	return (allocated_memory);
}
