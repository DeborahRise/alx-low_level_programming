#include "main.h"
#include <string.h>

/**
 * *cap_string - capitalizes all words
 * @s: referenced array
 * Return: 0
 */

char *cap_string(char *s)
{
	char sC[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 0};
	int length = strlen(s);
	int i;
	int j;

	for (i = 0; i <= length; i++)
	{
		for (j = 0; sC[j] != 0; j++)
		{
			if (i == 0 && s[i] >= 97 && s[i] <= 122)
			{
				s[i] = s[i] - 32;
			}
			else if (sC[j] == s[i] && s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
