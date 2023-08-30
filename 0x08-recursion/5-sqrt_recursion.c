#include "main.h"

/**
 * help_sqrt_recursion - helper function
 * _sqrt_recursion - function natural square root of a number
 * @n: number passed
 * @i: square root check
 * Return: 0
 */

int help_sqrt_recursion(int n, int i)
{
	if (i * i < n)
	{
	return (help_sqrt_recursion(n, i + 1));
	}
	if (i * i == n)
	{
	return (i);
	}
	if (i * i > n)
	{
	return (-1);
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	else
	return (help_sqrt_recursion(n, 0));
}
