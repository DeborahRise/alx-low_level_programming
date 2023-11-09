#include "lists.h"

/**
 * dlistint_len - a function that returns the number
 * of elements in a linked dlistint_t list.
 * @h: head of list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	if (!h)
		return (0);
	i = 0;
	while (h)
	{
		h = h->next;
		i += 1;
	}
	return (i);
}
