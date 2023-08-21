#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - prints string in reverse
 * @s: string passed
 * Return: 0
 */

void rev_string(char *s)
{
	int x = strlen(s);
	int y = (x - 1);

	while (y >= 0)
	{
		printf("%c", s[y]);

		y++;
	}
}
