#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
* free_grid - frees memory allocated to 2D grid
* @grid: the grid to be freed
* @height: height of the grid
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		free(grid);

	for (; i < height; i++)
		free(grid[i]);

	free(grid);
}
