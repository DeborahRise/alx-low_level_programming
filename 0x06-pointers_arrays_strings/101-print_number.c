#include "main.h"
#include <stdio.h>

/**
 * print_number - a function that prints integers
 * @n: parameter passed
 * Return: void
 */

void print_number(int n)
{
	unsigned int i = n;
	unsigned int a;
	unsigned int count = 1;
	unsigned int x = n;

	if (n < 0)
	{
		x = -(n);
		i = -(i);
		putchar('-');
	}
	if (i >= 0 && i < 10)
	{
		putchar(i + '0');
	}
	else
	{
		while (i >= 10)
		{
		i = i / 10;
		count = count * 10;
		}
		while (count >= 1)
		{
			a = ((x / count) % 10);
			putchar(a + '0');
			count = count / 10;
		}
	}
}
