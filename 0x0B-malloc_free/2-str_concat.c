#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	char *ptrS;
	int size;

	size = strlen(s1) + strlen(s2);
	ptrS = (char *) malloc(size * sizeof(char) + 1);

	ptrS = strcat(s1, s2);
                return (ptrS);

	if (ptrS == NULL)
	{
	return (NULL);
	}

	if (size == 0)
	{
	return (NULL);
	}
	
		/**
		 * ptrS = strcat(s1, s2); return (ptrS);
		 */
	
}
