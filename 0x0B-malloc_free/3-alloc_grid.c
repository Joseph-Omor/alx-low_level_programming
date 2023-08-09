#include "main.h"

/**
 * alloc_grid - A function that returns a pointer to a 2D array of integers
 * @width: argument for width
 * @height: argument for height
 *
 * Return: Pointer to 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	/* Check if valid */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* allocate memory for an array of pointers using malloc */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		/* allocate memory for each row */
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* free allocated space and return NULL if failed */
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
