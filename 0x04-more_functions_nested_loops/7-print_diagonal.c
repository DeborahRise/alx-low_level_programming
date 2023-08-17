#include "main.h"

/**
 * print_diagonal - print diagonal on screen
 * @n: parameter passed
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = i - 1; j > 0; j--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
