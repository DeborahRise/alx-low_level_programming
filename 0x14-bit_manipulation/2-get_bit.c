#include "main.h"

/**
 *  get_bit - a function that returns the value
 *  of a bit at a given index.
 *  @n: number to be checked
 *  @index: given index
 *  Return:the value of the bit at index index
 *  or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index > sizeof(size_t) * 8)
		return (-1);

	n = (n >> index);
	m = (n & 1);
	return (m);
}
