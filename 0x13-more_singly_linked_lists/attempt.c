#include "lists.h"

/**
 * print_listint_safe - a function that prints
 * all the elements of a listint_t list.
 * @head: head of node
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *current, *traverse;

	if (!head)
		exit(98);

	current = NULL;
	traverse = head;

	while (traverse != current)
	{
		printf("[%p] %d\n", (void *)traverse->next, traverse->n);
		nodes++;
		if (traverse >= current)
			current = traverse;
		else
		{

			printf("->[%p] %d\n", (void *)traverse->next, traverse->n);
			nodes++;
		}

		traverse = traverse->next;
	}



	return (nodes);
}
