#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list types;
	int i = 0;
	char *str;

	va_start(types, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(types, int));
				break;
			case 'i':
				printf("%d", va_arg(types, int));
				break;
			case 'f':
				printf("%f", va_arg(types, double));
				break;
			case 's':
				str = va_arg(types, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				printf("%s", str);

				break;

			default:
				i++;
				continue;
		}
		if (format[i + 1])
		printf(", ");
		i++;
	}
	printf("\n");
	va_end(types);
}
