#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string passed
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s == '\0')
	return (0);
	else
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}
