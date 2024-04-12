#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * of int iterating using  jumps
 * @array: Type pointer of given array
 * @size: Type size of elements in the array
 * @value: Type value to be searched
 * Return: Value, or -1 if value not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, n, jump;

	if (!array || size == 0)
		return (-1);

	for (n = sqrt(size); i < size; i += n)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - n, i);
	for (jump = i - n; jump < size && jump <= i; jump++)
	{
		printf("Value checked array[%lu] = [%d]\n", jump, array[jump]);
		if (array[jump] == value)
			return (jump);
	}
	return (-1);
}
