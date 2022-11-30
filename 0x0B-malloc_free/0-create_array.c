#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of char
 * @c: the size of the memory to print
 * @size: the size of the memory to print
 *
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
	free(arr);
}
