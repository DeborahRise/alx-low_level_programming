#include "main.h"
#include <string.h>

/**
 * *_strstr - a function that locates a substring
 * @haystack: the haystack
 * @needle: the needle
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	char *c = strstr(haystack, needle);

		return (c);
}
