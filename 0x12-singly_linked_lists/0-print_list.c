#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: the head of the node
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	if (!h)
		return (0);

	while (h->next)
	{
		if (!h->str)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		n++;
	}
	if (h->str == NULL)
	{
		printf("[%d] %s\n", 0, "(nil)");
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
	}
	n++;
	return (n);
}
