#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 *
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the first node where value is located or NULL if not found
 * Description: Jump search is an improvement of linear search
 * The idea is to find the range where the element is present
 * and then do linear search in that range
 * Time complexity: O(sqrt(n)) on average, O(n) in worst case
 * Space complexity: O(1)
 * where n is the number of nodes in list
 *
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t i, j, step;
    listint_t *current, *prev;

    if (!list || size == 0)
        return (NULL);

    step = sqrt(size);
    for (i = 0, current = list; current->index < size - 1;)
    {
        prev = current;
        for (j = i + step; i < j && current->index < size - 1; i++)
            current = current->next;
        printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
        if (current->n >= value)
            break;
    }
    printf("Value found between indexes [%ld] and [%ld]\n", prev->index, current->index);
    for (; prev->index <= current->index; prev = prev->next)
    {
        printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
    }
    return (NULL);
}