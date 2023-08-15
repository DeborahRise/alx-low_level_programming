#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 time table
 * Return: 0
 */

void times_table(void)
{
	int i;
	int j;
	int x;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			x = (i * j);
			printf("%d", x);
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
