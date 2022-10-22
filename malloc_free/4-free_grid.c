#include <stdlib.h>

/**
 * free_grid - free grid
 *
 * @grid: grid
 * @height: height
 *
 * Return: voidd
 */

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
			free(grid[i]);
	free(grid);
}
