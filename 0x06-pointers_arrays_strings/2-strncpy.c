#include "main.h"
#include <string.h>

/**
 * *_strncpy - copys n limit of 2 strings
 * @dest: string 1
 * @src: string 2
 * @n: number limit for string 2
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}
