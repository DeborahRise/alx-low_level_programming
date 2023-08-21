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
	int i;

		for (i = 0; str[i] != '\0'; i += 2)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
