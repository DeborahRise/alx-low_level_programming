#include "main.h"
#include <string.h>

/**
 * *_memset - a function that fills memory with a constant byte
 * @s: parameter passed
 * @b: parameter passed
 * @n: parameter Passed
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
