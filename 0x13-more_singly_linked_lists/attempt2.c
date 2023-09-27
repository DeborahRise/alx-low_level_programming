#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: A pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *current = head;
	const listint_t *loop_node = NULL;

	if (!head)
		exit(98);

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		nodes++;

		if (current == loop_node)
		{
			printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
			break;
		}

		current = current->next;

		if (current == head)
			loop_node = head;
	}

	return (nodes);
}
