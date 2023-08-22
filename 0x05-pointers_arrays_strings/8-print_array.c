#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - prints array on n integers
 * @a: pointer array
 * @n: size of array
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
		printf("%d", a[i]);
		}
		else
		{
		printf(", %d", a[i]);
		}
	}
	printf("\n");
}
