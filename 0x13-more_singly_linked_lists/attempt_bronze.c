#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: A pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *back = head;
	const listint_t *ahead = head;

	if (!head)
		exit(98);

	while (ahead && ahead->next)
	{
		printf("[%p] %d\n", (void *)back, back->n);
		nodes++;

		back = back->next;
		ahead = ahead->next->next;

		if (back == ahead)
		{
			printf("-> [%p] %d\n", (void *)back, back->n);
			break;
		}
	}

	return (nodes);
}
