#include "main.h"

/**
 * print_number - a function that prints integers
 * @n: parameter passed
 * Return: 0
 */

void print_number(int n)
{
	unsigned int a;
	unsigned int count = 1;
	unsigned int x = n;

	if (n < 0)
	{
		x = -n;
		n = -n;
		_putchar('-');
	}
	while (n > 9)
	{
		if (n >= 0 && n < 10)
		{
			_putchar(n + '0');
		}
		else
		{
			n = (n / 10);
			count = count * 10;
		}
	}
	while (count >= 1)
	{
		a = ((x / count) % 10);
		_putchar(a + '0');
		count = count / 10;
	}
}
