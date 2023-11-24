#include "main.h"

/**
 * free_grid - frees all allocated memory in this file
 *
 * @grid: pointer to grid
 *
 * @height: grid height
 *
 */

void free_grid(int **grid, int  height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

