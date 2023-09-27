#include "lists.h"

/**
 * print_listint - a function that prints
 * all the elements of a listint_t list.
 * @h: head of node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h->next)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	printf("%d\n", h->n);
	nodes++;
	return (nodes);
}
