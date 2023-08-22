#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of the array
 * @str: parameter passed
 * Return: 0
 */

void puts_half(char *str)
{
	int f = strlen(str);
	int n;

	for (n = (f / 2); str[n] != '\0'; n++)
	{
		if (n < f)
		{
			if (f % 2 == 0)
			{
			_putchar(str[n]);
			}
			else
			{
			_putchar(str[n + 1]);
			}
		}
	}
	_putchar('\n');
}
