#include "main.h"
#include <string.h>

/**
 **leet - a function that encodes a string into 1337.
 *@s: array referenced
 *Return: 0
 */

char *leet(char *s)
{
	char a[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char b[] = {'4', '3', '0', '7', '1', '\0'};
	int length = strlen(s);
	int i, j;

	for (i = 0; i <= length; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (a[j] == s[i] || (a[j] - 32) == s[i])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
