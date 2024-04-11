#include "search_algos.h"
/*
 *
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