#include "main.h"
#include <string.h>

/**
 * *rot13 - function that encodes a string using rot13
 * @s: parameter array
 * Return: 0
 */

char *rot13(char *s)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; alpha[j] != '\0'; ++j)
		{
			if (s[i] == alpha[j])
			{
				*(s + i) = *(rot + j);
			}
		}
	}
	return (s);
}
