#include "function_pointers.h"

/**
 * int_index - function to find an integer
 * @array: pointer to array
 * @size: size of array
 * @cmp: function pointer
 *
 *
 * Return: i if successfull, -1 if error
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, value;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			value = cmp(array[i]);
			if (value != 0)
			return (i);
		}
	}
	return (-1);
}
