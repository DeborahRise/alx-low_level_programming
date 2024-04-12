#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 *
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 * Return: pointer to the first node where value is located or NULL if not found
 * Description: Skip list is a data structure that allows faster search within
 * an ordered sequence of elements
 * Time complexity: O(log(n)) on average, O(n) in worst case
 * Space complexity: O(1)
 * where n is the number of elements in list
 *
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current, *prev;

    if (!list)
        return (NULL);

    for (current = list; current; current = current->express)
    {
        prev = current;
        printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
        if (current->n >= value)
            break;
    }
    if (!current)
        return (NULL);
    printf("Value found between indexes [%ld] and [%ld]\n", prev->index, current->index);
    for (; prev; prev = prev->next)
    {
        printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        if (prev->n > value)
            return (NULL);
    }
    return (NULL);
}