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
int y;
int z = 0;
char j;

for (y = x - 1; y > z; y--)
{
	j = s[z];
	s[z] = s[y];
	s[y] = j;

	z = z + 1;
}
}
