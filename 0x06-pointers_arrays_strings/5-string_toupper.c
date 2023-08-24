#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * string_toupper - changes lowercase to upper
 * @a: array reference
 * Return: 0
 */

char *string_toupper(char *a)
{
	int length = strlen(a);
	int i;

	for (i = 0; i < length; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - ('a' - 'A');
		}
	}
	return (a);
}
