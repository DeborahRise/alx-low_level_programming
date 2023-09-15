#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list types;
	int flag, i = 0;
	char *str;

	va_start(types, format);

	while (format && format[i])
	{
		flag = 1;
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
				printf("%s", (str ? str : "(nil)"));

				break;

			default:
				flag = 0;
				break;
		}
		if (format[i + 1] && flag == 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(types);
}
