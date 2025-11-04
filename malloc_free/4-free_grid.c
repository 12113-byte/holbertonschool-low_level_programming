#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid
 * @height: the height of the grid (count of rows)
 * @grid: the rows and columns of the whole grid
 * Return: no return, due to void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

