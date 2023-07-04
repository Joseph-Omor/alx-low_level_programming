#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Description: It creates an array of integers containing all values from
 * 'min' to 'max', ordered from smallest to largest.
 *
 * Return: The pointer to the newly created array, or NULL if unsuccessful.
 */
int *array_range(int min, int max)
{
	int *arr, size, i;

	/* To indicate invalid range */
	if (min > max)
	{
		return (NULL);
	}

	/* Calculate the size of the array */
	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	/* Populate the array with values from min to max */
	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}