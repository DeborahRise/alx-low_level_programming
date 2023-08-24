#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an integer array
 * @a: array reference
 * @n: number of elements
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int k = 0;

	for (i = n - 1; i > k; i--)
	{
		j = a[i];
		a[i] = a[k];
		a[k] = j;

		k = k + 1;
	}
}
