#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: array passed
 * @size: size of array
 * @cmp: funtion pointer
 * Return: index of array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0;  i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
