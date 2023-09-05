#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int i, size, len1, len2;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	size = len1 + len2;

	ptr = (char *) malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		ptr[len1 + i] = s2[i];
	}
	return (ptr);
}
