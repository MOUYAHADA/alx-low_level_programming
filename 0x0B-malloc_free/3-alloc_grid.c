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

/**
 * alloc_grid - allocate a two dimentions array of type int
 * and intialize it to 0
 *
 * @width: grid width
 *
 * @height: grid height
 *
 * Return: pointer to the allocated grid
 */

int **alloc_grid(int width, int height)
{
	int **grid = malloc(sizeof(int *) * height);
	int i;

	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		int x;

		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
		{
			free_grid(grid, i);
			return (NULL);
		}

		for (x = 0; x < width; x++)
		{
			grid[i][x] = 0;
		}
	}

	return (grid);
}
