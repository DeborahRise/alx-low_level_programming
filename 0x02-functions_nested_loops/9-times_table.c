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
			if (j < 9)
			{
				_putchar(x + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				printf("%d", x);
			}
		}
	_putchar('\n');
	}
}
