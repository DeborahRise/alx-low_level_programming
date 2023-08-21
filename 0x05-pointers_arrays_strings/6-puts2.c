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
		printf("%c", str[i]);
		i = (i + 2);
	}
	printf("\n");
}
