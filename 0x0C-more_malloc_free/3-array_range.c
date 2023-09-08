#include "main.h"

/**
 * *array_range - a function that creates an array of integers
 * @min: min value
 * @max: max value
 * Return: an array of values from min to max
 */

int *array_range(int min, int max)
{
	int *y;
	int i, range;

	if (min > max)
		return (NULL);
	/*value of range from min to max*/
	range = (max - min) + 1;
	y = malloc(range * sizeof(int));
	if (y == NULL)
	{
		free(y);
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		y[i] = min;
		min++;
	}
	return (y);
}
