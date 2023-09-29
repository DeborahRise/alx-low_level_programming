#include "main.h"

/**
 * help_print_binary - a function that prints
 * the binary representation of a number
 * @n: number given
 * Return: void.
 */

void help_print_binary(unsigned long int n)
{
	if (n == 0)
		return;
	help_print_binary(n >> 1);

	if (n & 1)
	{
		_putchar('1');
	}
	if (!(n & 1))
	{
		_putchar('0');
	}

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
