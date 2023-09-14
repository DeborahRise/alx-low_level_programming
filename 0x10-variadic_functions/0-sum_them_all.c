#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sums;
	unsigned int i;
	int total = 0;
	va_start(sums, n);

	if (n == 0)
	{
		return (0);
	}


	for (i = 0; i < n; i++)
	{
		total = total + va_arg(sums, int);
	}
	return (total);

}
