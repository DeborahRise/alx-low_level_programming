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

	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
		{
		printf("%d", va_arg(print, int));
		printf("%s", separator);
		}
	}
	printf("%d", va_arg(print, int));
	putchar('\n');
	va_end(print);
}
