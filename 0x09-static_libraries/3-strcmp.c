#include "main.h"
#include <string.h>

/**
 * *_strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: char
 */

int _strcmp(char *s1, char *s2)
{
	int result = strcmp(s1, s2);

	if (s1 < s2)
	{
		return (result);
	}
	else if (s1 == s2)
	{
		return (0 * result);
	}
	else
	{
		return (1 * result);
	}
}
