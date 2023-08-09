#include <stdlib.h>

/**
 * create_array - Creates an array of characters and initialize it
 * @size: argument indicating size of array
 * @c: argument to initialize array with
 *
 * Return: Null if size is 0 or failed malloc, or pointer to created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; ++i)
	{
		array[i] = c;
	}
	return (array);
}
