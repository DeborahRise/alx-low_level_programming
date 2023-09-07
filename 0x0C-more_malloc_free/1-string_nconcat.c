#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1: string passed
 * @s2: string 2 passed
 * @n: size of string 2to be concatenated
 * Return: pointer to nconcat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	ptr = malloc((strlen(s1) + n) * sizeof(char) + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		ptr[strlen(s1) + i] = s2[i];
	}
	ptr[strlen(s1) + i] = '\0';
	return (ptr);
}
