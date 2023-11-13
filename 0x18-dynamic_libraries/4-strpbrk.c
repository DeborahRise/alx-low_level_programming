#include "main.h"
#include <string.h>

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 * @s: string searched
 * @accept: accepted set of bytes
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	char *c = strpbrk(s, accept);

	return (c);
}
