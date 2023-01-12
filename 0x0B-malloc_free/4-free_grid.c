#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional array of integers.
 * @grid: 2D array of integers to be freed.
 * @height: Height of grid.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

