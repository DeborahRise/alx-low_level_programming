#include "function_pointers.h"
#include <string.h>
#include <stdlib.h>

/**
 * print_name - a function that prints a name.
 * @name: name passed
 * @f: name of pointer to  function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	(f)(name);
}
