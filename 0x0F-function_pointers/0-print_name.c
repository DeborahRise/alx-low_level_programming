#include "function_pointers.h"
#include <string.h>
#include <stdlib.h>

/**
 * funct - a function that prints a name.
 * @a: array passed
 * Return: Nothing
 */

void funct(char *a)
{
	int i;
	int len = sizeof(a);

	if (len != 0)
	{
		for (i = 0; i < len; i++)
		{
			_putchar(a[i]);
		}
	}
}

/**
 * print_name - a function that prints a name.
 * @name: name passed
 * @f: name of pointer to  function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f = funct;

	(*f)(name);
}
