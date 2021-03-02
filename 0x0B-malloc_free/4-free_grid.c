#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Frees memory from 2d grid
 *
 * @grid: Address of grid
 * @height: Height of grid
 *
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

