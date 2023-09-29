#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, i = 0;

	xor = n ^ m;

	while (xor)
	{

		if (xor & 1)
		{
			i++;
		}
		xor >>= 1;
	}
	return (i);
}
