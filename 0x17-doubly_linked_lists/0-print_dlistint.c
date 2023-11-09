#include "lists.h"

/**
 * print_dlistint - a function that prints all
 * the elements of a dlistint_t list.
 * @h: head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	if (!h)
		return (0);
	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i += 1;
	}
	return (i);
}
