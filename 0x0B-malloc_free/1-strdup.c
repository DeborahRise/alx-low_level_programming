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

	if (str == NULL)
		return (NULL);
	ptrC = strdup(str);
	if (ptrC == NULL)
	{
		return (NULL);
	}
	else
	{
		return (ptrC);
	}
}
