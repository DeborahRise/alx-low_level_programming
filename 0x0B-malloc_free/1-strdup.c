#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer to a newly allocated space,
 * which contains a copy of the string given as a parameter.
 * @str: string passed
 * Return: 0
 */

char *_strdup(char *str)
{
	char *ptrC;
	int size;

	size = strlen(str);

	ptrC = (char *) malloc(size * sizeof(char) + 1);

	if (ptrC == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptrC = strdup(str);
		return (ptrC);
		free(ptrC);
	}
}
