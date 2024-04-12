#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
 * Description: Exponential search is an improvement of binary search
 * The idea is to find the range where the element is present
 * and then do binary search in that range
 * Time complexity: O(log(n)) on average, O(n) in worst case
 * Space complexity: O(1)
 * where n is the number of elements in array
 *
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (!array)
		return (-1);
	for (low = 0, high = 1; high < size && array[high] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		low = high;
		high *= 2;
	}
	if (high >= size)
		high = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);
	for (i = low; i <= high; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
