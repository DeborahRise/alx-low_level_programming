#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
 * Description: Binary search is a search algorithm that finds the position of
 * a target value within a sorted array
 * Time complexity: O(log(n))
 * Space complexity: O(1)
 * where n is the number of elements in array
 *
 */

int advanced_binary(int *array, size_t size, int value)
{
    size_t i, mid, offset = 0;

    if (!array)
        return (-1);
    printf("Searching in array: ");
    for (i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
        else
            printf("\n");
    }
    mid = (size - 1) / 2;
    if (array[mid] == value)
    {
        if (size == 1 || array[mid - 1] < value)
            return (mid);
    }
    if (size == 1)
        return (-1);
    if (array[mid] < value)
    {
        offset += mid + 1;
        array += mid + 1;
        if (size % 2 != 0)
            mid--;
    }
    mid++;
    if (mid == 0)
        return (-1);
    if (array[mid] == value)
        return (offset + mid);
    if (array[mid] > value)
        return (advanced_binary(array, mid, value));
    mid = advanced_binary(array + mid, size - mid, value);
    if (mid == -1)
        return (-1);
    return (mid + offset);
}