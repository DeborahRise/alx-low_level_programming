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
	char *f = strchr(s, c);

	if (*f != '\0')
	{
		return (f);
	}
	else
	{
		return ('\0');
	}
}
