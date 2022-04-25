#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* alloc_grid - creates 2D array of integers
* @width: size of the column of the grid
* @height: size of the rows of the grid
* Return: pointer to the 2D array
*/

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		if (grid[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

		for (; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
