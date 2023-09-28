#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int.
 * @b: binary number passed
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 0;
	int len, i, pow = 1;

	if (!b)
		return (0);

	len = strlen(b);

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		deci += ((b[i] - '0') * pow);
		pow *= 2;
	}
	return (deci);
}
