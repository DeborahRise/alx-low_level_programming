#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: string separating arguments
 * @n: number of arguments passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(string, char *) == NULL)
		{
			printf("(nil)");
		}
		printf("%s", va_arg(string, char *));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(string);
}
