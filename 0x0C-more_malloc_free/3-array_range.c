#include "main.h"

/**
 * array_range - A function that creates an array of integers
 * @min: argument for minimum range
 * @max: argument for maximum range
 *
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, array_size;
	int *new_array;

	if (min > max)
	{
		return (NULL);
	}

	/* Calculate the size of the array */
	array_size = max - min + 1;

	/* Allocate memory for the array */
	new_array = malloc(sizeof(new_array) * array_size);
	if (new_array == NULL)
	{
		return (NULL);
	}

	/* Populate the array with values from min to max */
	for (i = 0; i < array_size; i++)
	{
		new_array[i] = min + i;
	}

	return (new_array);
}
