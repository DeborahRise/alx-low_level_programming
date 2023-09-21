#include "lists.h"

/**
 * list_len - a function that returns the number of elements of a list_t list.
 * @h: the head of the node
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	if (!h)
		return (0);

	while (h->next)
	{

		h = h->next;
		n++;
	}
	n++;
	return (n);
}
