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
	for (i = 0; i <= len; i++)
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
	int row, i, s, x, j;
	int position = 0;
	char **arr;

	if (str == NULL || str == '\0')
	{
		return (NULL);
	}
	row = word_count(str);
	arr = (char **) malloc(row * sizeof(char *) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < row; x++)
	{
		s = strlen(str[x]);
		arr[x] = (char *) malloc(s * sizeof(char) + 1);
		if (arr[i] == NULL)
		{
			for (i = 0; i < row; i++)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < s; j++)
		{
			arr[position] = arr[x][j];
			position++;
		}
	}
	arr[position] = '\0';
	return (arr);
	for (i = 0; i < row; i++)
	{
		free(arr[i]);
	}
	free(arr);

}
