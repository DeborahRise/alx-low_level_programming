#include "main.h"

/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s : string passed
 * Retturn: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar(10);
	return;
	}
	else
	{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	}
}
