#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates 2 strings
 * @dest: string 1
 * @src: string 2
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
