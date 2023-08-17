#include "main.h"

/**
 * print_triangle - printing triangles
 * @size: the parameter passed
 * Return: 0
 */

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = i + 1; j <= size; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar(35);
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
