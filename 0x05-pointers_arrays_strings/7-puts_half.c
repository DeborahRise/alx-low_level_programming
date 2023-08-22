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
	int n = f / 2;
	int i;

	for (i = n; i < f; i++)
	{
		if (f % 2 == 0)
		{
		_putchar(str[i]);
		}
		else
		{
		_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
