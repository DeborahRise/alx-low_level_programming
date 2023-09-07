#include "main.h"

/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of each element
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *y;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	y = calloc(nmemb, size);
	if (y == NULL)
	{
		free(y);
		return (NULL);
	}
	else
	{
		return (y);
	}
}
