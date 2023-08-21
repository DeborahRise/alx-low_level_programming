#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character
 * @str: passed parameter
 * Return:0
 */

void puts2(char *str)
{
	int i = 0;
	int n = strlen(str);

	while (i <= n)
	{
		_putchar(str[i]);
		i = (i + 2);
	}
	_putchar('\n');
}
