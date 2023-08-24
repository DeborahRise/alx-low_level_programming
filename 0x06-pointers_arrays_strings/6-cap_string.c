#include "main.h"
#include <string.h>

/**
 * *cap_string - capitalizes all words
 * @s: referenced array
 * Return: 0
 */

char *cap_string(char *s)
{
	char sC[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125, '\0'};
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - ('A' - 'a');
		}
		for (j = 0; sC[j] != '\0'; j++)
		{
			if (sC[j] == s[i] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - ('A' - 'a');
			}
		}
	}
	return (s);
}
