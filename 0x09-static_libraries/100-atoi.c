#include "main.h"
#include <string.h>
#include <limits.h>

/**
 * _atoi - converts string to integer
 * @s: string parameter passed
 * Return: 0
 */

int _atoi(char *s)
{
	int w, x, y, length, z, digit;

	w = 0;
	x = 0;
	y = 0;
	length = 0;
	z = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (w < length && z == 0)
	{
		if (s[w] == '-')
			++x;

		if (s[w] >= '0' && s[w] <= '9')
		{
			digit = s[w] - '0';
			if (x % 2)
				digit = -digit;
			y = y * 10 + digit;
			z = 1;
			if (s[w + 1] < '0' || s[w + 1] > '9')
				break;
			z = 0;
		}
		w++;
	}

	if (z == 0)
		return (0);
	return (y);
}
