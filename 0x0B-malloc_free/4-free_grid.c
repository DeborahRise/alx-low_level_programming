#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees
 * a 2 dimensional array of integers
 * @grid: 2-D array
 * @height: row of array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
		{
		free(grid[i]);
		}
		free(grid);
	}
}
