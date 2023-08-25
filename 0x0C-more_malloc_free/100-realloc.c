#include "main.h"

/**
 * _realloc - A function that reallocates a memory block using malloc and free
 * @ptr: A pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: the size, in bytes, of the new memory block
 *
 * Return: NULL if ptr is not NULL and the requested size is zero, or ptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, copy_size;
	void *new_ptr;

	if (new_size == 0)
	{
		/* If new_size is zero and ptr is not NULL */
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		/* If ptr is NULL, equivalent to malloc(new_size) */
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		/* If new_size is equal to old_size */
		return (ptr);
	}

	/* Calculate the size to copy (minimum of old_size and new_size) */
	copy_size = (old_size < new_size) ? old_size : new_size;

	/* Allocate memory for the new block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	/* Copy contents from old block to new block */
	for (i = 0; i < copy_size; i++)
	{
		*((char *)new_ptr + i) = *((char *)ptr + i);
	}
	free(ptr);
	return (new_ptr);
}
