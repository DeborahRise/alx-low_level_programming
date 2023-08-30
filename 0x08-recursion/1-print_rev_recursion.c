#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: parameter passed
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	return;
	else
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
