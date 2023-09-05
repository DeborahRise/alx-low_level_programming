#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of Array
 * @c: the initialising character
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *ptrC;
	unsigned int i;

	ptrC = (char *) malloc(size * sizeof(char) + 1);

	if (ptrC == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptrC[i] = c;
	}
	ptrC[i] = '\0';
	return (ptrC);
	free(ptrC);
}
