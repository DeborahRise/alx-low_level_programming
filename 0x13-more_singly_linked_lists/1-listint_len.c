#include "lists.h"

/**
 * listint_len - a function that returns the number of elements
 * in a linked listint_t list.
 * @h: first element of node
 * Return: number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	if (h == NULL)
		return (0);

	while (h->next)
	{
		h = h->next;
		elements++;
	}
	elements++;
	return (elements);
}
