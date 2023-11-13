#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates 2 strings
 * @dest: string 1
 * @src: string 2
 * @n: number limit for string 2
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
