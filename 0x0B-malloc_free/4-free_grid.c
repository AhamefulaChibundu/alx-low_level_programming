#include <stdlib.h>

/**
 * free_grid - Function that frees a 2D grid
 * @grid: pointer pointing to the pointer pointing to the array
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
