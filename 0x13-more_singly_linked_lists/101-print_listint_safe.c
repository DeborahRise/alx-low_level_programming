#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: A pointer to the head of the list
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head);
size_t print_listint_safe(const listint_t *head)
{ size_t nodes = 0;
	const listint_t *current = head;

	if (!head)
		exit(98);

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		nodes++;
		current = current->next;

		if (current && current <= head)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return nodes;
}
