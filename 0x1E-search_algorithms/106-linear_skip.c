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
    skiplist_t *temp = NULL, *stop = NULL;

    if (!list)
        return (NULL);

    temp = list;
    while (temp && temp->express && temp->express->n < value)
    {
        printf("Value checked at index [%lu] = [%i]\n",
               temp->express->index, temp->express->n);
        temp = temp->express;
    }
    stop = temp;
    while (stop && stop->next != stop->express)
        stop = stop->next;
    /* value potentially lies between two express nodes */
    if (temp->express)
    {
        printf("Value checked at index [%lu] = [%i]\n",
               temp->express->index, temp->express->n);
        printf("Value found between indexes [%lu] and [%lu]\n",
               temp->index, temp->express->index);
    }
    /* value is greater than last express node, potentially out of list */
    else
        printf("Value found between indexes [%lu] and [%lu]\n",
               temp->index, stop->index);

    while (temp != stop && temp->n < value)
    {
        printf("Value checked at index [%lu] = [%i]\n",
               temp->index, temp->n);
        temp = temp->next;
    }
    printf("Value checked at index [%lu] = [%i]\n",
           temp->index, temp->n);

    if (temp == stop)
        return (NULL);
    return (temp);
}