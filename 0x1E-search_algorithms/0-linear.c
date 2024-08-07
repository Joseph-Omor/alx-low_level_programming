#include "search_algos.h"
#include <stdio.h>


/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if value is not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;


	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

