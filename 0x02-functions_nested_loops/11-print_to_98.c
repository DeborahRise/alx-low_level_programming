#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints the natural numbers
 * @n: parameter to be checked
 * Return: 0
 */

void print_to_98(int n)
{

	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
}
