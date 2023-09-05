#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * **alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: column of array
 * @height: row of array
 * Return: pointer to a 2-D array
 */

int **alloc_grid(int width, int height)
{
	int **two_d;
	int i, j;


	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	two_d = (int **) malloc(height * sizeof(int *));
	if (two_d == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		two_d[i] = (int *) malloc(width * sizeof(int));
		if (two_d[i] != NULL)
		{
			for (j = 0; j < width; j++)
			{
				two_d[i][j] = 0;
			}
		}
		else
		{
			return (NULL);
			for (i = 0; i < height; i++)
			free(two_d[i]);
			free(two_d);
		}
	}
	return (two_d);
	for (i = 0; i < height; i++)
	{
		free(two_d[i]);
	}
	free(two_d);
}
