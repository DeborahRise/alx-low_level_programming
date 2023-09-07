#include "main.h"

/**
 * *malloc_checked - a function that allocates memory
 * using malloc
 * @b - size of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc(x * sizeof(int));

	if (x == NULL)
	{
		exit(98);
	}
	else
	{
		return (x);
	}

}
