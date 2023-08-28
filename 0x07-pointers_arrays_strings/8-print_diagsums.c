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
	int i, j;
	int sum1, sum2 = 0;
	int result;

	for  (i = 0; i < size; i++)
	{
		for (j = i; j <= i; j++)
		{
			sum1 = sum1 + (a[i] + j);
		}
	}
	for (i = (size - 1); i >= 0; i--)
	{
		for (j = (size - i - 1); j < (size - i - 1); j++)
		{
			sum2 = sum2 + (a[i] + j);
		}
	}
	result = sum1 + sum2;

	printf("%d", result);
}
