#include "main.h"

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: - size of memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);
	return (x);

}
