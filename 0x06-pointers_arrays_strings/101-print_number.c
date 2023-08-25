#include "main.h"

/**
 * print_number - a function that prints integers
 * @n: parameter passed
 * Return: 0
 */

void print_number(int n)
{
	int a;
	int count = 1;
	int x = n;

	if (n < 0)
	{
		x = -n;
		n = -n;
		_putchar('-');
	}
	if (n >= 0 && n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		while (n > 9)
		{
			n = (n / 10);
			count = count * 10;
		}
		while (count >= 1)
		{
			a = ((x / count) % 10);
			_putchar(a + '0');
			count = count / 10;
		}
	}
}
