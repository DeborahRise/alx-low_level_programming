#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the character seperating arguments
 * @n: number of arguments
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;

	va_start(print, n);
	if (separator == NULL || n == 0)
	{
		return;
	}

	for (i = 0; i < n - 1; i++)
	{
		printf("%d%s ", va_arg(print, const unsigned int), separator);
	}
	printf("%d", va_arg(print, const unsigned int));
	putchar('\n');
	va_end(print);
}
