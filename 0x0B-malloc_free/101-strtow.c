#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * word_count - a function that splits a string into words.
 * @str: string passed
 * Return: pointer to an array of strings
 */

int word_count(char *str)
{
	int len;
	int i;
	int counter = 0;

	len = strlen(str);
	for (i = 0; for i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			str[i] = '\0';
			counter = counter + 1;
		}

	}
	return (counter);
}
/**
 * **strtow - a function that splits a string into words.
 * @str: string passed
 * Return: pointer to an array of strings
 */

char **strtow(char *str)
{
	if 	
}
