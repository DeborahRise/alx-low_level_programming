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
	int i;

	if ((f % 2) == 1)
	{
	n = ((f + 1) / 2);
	}
	else
	{
	n = (f / 2);
	}

	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
