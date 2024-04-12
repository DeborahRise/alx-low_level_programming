#include "search_algos.h"

/**
 *  interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
 * Description: Interpolation search is an improvement of binary search
 * The idea of formula is to return higher value of pos
 * when element to be searched is closer to arr[hi]. And
 * smaller value when closer to arr[lo]
 * pos = lo + [ (x-arr[lo])*(hi-lo) / (arr[hi]-arr[Lo]) ]
 * where arr[] is the array, x is the element to be searched
 * and pos is the index of x
 * Array must be sorted in ascending order
 * If x is present in array, then returns index of it, otherwise returns -1
 * Time complexity: O(log(log(n))) on average, O(n) in worst case
 * Space complexity: O(1)
 * where n is the number of elements in array
 *
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, low, high;

	if (!array)
		return (-1);
	for (low = 0, high = size - 1; high >= low;)
	{
		i = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}
		if (array[i] == value)
			return (i);
		if (array[i] > value)
		{
			high = i - 1;
		}
		else
		{
			low = i + 1;
		}
	}
	return (-1);
}
