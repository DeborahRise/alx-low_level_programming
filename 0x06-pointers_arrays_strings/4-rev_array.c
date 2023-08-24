#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an
 * array of integers
 * @a: array reference
 * @n: size of array
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
