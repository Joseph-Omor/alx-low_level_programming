#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: function pointer to function that compares int argument
 *
 * Return: index of first return of 1 by cmp, -1 if cmp don't find match, -1 if
 * size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int stat;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		stat = (cmp(array[i]));
		if (stat != 0)
		{
			return (i);
		}
	}
	return (-1);
}
