#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array
 * @width: columns of array
 * @height: rows of array
 *
 * Return: NULL if unsuccessful, and ptr2 if successful
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr2 = NULL;


	ptr2 = (int **)malloc(sizeof(int *) * height);

	if (ptr2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr2[i] = malloc(sizeof(int) * width);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr2[i][j] = 0;
		}
	}

	return (ptr2);
}
