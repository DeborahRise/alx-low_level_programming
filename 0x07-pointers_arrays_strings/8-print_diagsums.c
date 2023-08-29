#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: square arrays
 * @size: size of array
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for  (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
	}
	for (i = size; i > 0; i--)
	{
		sum2 = sum2 + a[i * size - i];
	}
	printf("%d, %d\n", sum1, sum2);
}
