#include <stdlib.h>

/**
 * alloc_grid - alloc
 *
 * @width: width
 * @height: height
 *
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid)
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(int) * width);
			if (!grid[i])
			{
				for (--i; i >= 0; i--)
					free(grid[i]);
				free(grid);
				return (NULL);
			}

		}
		if (*grid)
		{
			for (i = 0; i < height; i++)
				for (j = 0; j < width; j++)
				{
					grid[i][j] = 0;
				}
		}
		else
		{
			return (NULL);
		}
		return (grid);
	}
	else
		return (NULL);
}
