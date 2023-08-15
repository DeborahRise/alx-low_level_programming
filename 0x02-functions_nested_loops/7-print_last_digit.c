#include "main.h"

/**
 * print_last_digit - prints the last digits
 * @n: parameter to be checked
 * Return: 0
 */

int print_last_digit(int n)
{
	long int x = (n % 10);

	_putchar(x + '0');
	return (x);
}
