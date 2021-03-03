#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to 2d array
 *
 * @width: Width of grid
 * @height: Height of grid
 *
 * Return: Pointer to grid array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int *) * width);

		if (grid[i] == NULL)
		{
			for (j = 0; j > 0; j--)
				free(grid[j]);
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
