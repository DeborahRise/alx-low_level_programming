#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located, -1 if value is not present
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %d at index: %lu\n", value, i);
			return (i);
		}
	}
	return (-1);
}
