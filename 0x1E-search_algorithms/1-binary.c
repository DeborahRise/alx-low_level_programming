#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located or -1 if value is not present in array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		if (left == right)
		{
			if (array[left] == value)
				return (left);
			else
				return (-1);
		}

		mid = ((left + right) / 2);
		if (value < array[mid])
			right = mid - 1;
		else if (value > array[mid])
			left = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
