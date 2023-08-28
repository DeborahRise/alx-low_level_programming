#include "main.h"
#include <string.h>

/**
 * *_strchr - a function that locates a character in a string
 * @s: string passed
 * @c: character checked
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
		return (s);
		}
		i++;
	}
	return (NULL);
}
