#include "main.h"
#include <string.h>

/**
 * *_memcpy - a function that copies memory area
 * @dest: destination string
 * @src: source string
 * @n: size of destination or source
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
