#include "main.h"

/**
 * _pow_recursion - a function solving x raised to the power of y.
 * @x: number passed
 * @y: power raise
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
