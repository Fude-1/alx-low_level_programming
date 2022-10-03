#include "main.h"

/**
 * free_grid - Frees a 2D array.
 *
 * @grid: Grid to be freed.
 * @height: Height of matrix.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
