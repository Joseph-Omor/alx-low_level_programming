#include "main.h"

/**
 * free_grid - frees memory allocated for a 2D array
 * @grid: 2D Array argument
 * @height: height of array
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	/* Free memory for each row (array of integers) */
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	/* Free memory for the array of pointers */
	free(grid);
}
