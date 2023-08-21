#include "main.h"

/**
 * swap_int - swaps 2 integers
 * @a: parameter variable
 * @b: parameter variable
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
