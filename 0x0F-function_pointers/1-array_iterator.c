#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as parameter
 * @array: array
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	void (*fptr)(int);

	fptr = action;
	i = 0;

	while (i < size)
	{
		fptr(array[i]);
		i++;
	}
}
