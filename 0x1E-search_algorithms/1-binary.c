#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index of value * or -1 if array is NULL or value is not found
 */
int binary_search(int *array, size_t size, int value)
{

	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
		{
			printf("%d, ", array[mid]);
		}
		printf("%d\n", array[mid]);

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}

