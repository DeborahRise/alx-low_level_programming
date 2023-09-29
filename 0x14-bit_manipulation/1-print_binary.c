#include "main.h"

/**
 * help_print_binary - a function that prints
 * the binary representation of a number
 * @n: number given
 * Return: void.
 */

void help_print_binary(unsigned long int n)
{
	unsigned long int m;

	if (n == 0)
		return;
	if ((n >> 1) != 0)
	{
		m = (n & 1);
		print_binary(n >>= 1);
		_putchar(m + '0');
	}
	_putchar(n + '0');
}

/**
 * print_binary - a function that prints
 * the binary representation of a number
 * @n: number given
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		help_print_binary(n);
	}
}
