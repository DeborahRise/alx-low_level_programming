#include "main.h"
#include <string.h>

/**
 * *rot13 - function that encodes a string using rot13
 * @s: parameter array
 * Return: 0
 */

char *rot13(char *s)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int length = strlen(s);
	int i, j;

	for (i = 0; i < length; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot[j];
			}
		}
	}
	return (s);
}
