#include "main.h"

/**
 * more_numbers - prints 1 to 14
 * Return: void
 */

void more_numbers(void)
{
	int d;
	int e;

	for (e = 1; e <= 10; e++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d > 9)
			{
				_putchar(d / 10 + '0');
			}
			_putchar(d % 10 + '0');
		}
		_putchar('\n');
	}
}
