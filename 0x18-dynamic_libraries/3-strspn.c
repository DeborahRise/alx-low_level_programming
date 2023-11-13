#include "main.h"
#include <string.h>

/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: string passed
 * @accept: accepted word
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int l = strspn(s, accept);

	return (l);
}
