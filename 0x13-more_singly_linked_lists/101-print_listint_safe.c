#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: A pointer to the head of the list
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head);
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *slow_ptr = head;
	const listint_t *fast_ptr = head;

	if (!head)
		exit(98);

	while (fast_ptr && fast_ptr->next)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		nodes++;

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;

		if (slow_ptr == fast_ptr)
		{
			printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			break;
		}
	}
	if (slow_ptr == fast_ptr)
	{
		slow_ptr = head;
		while (slow_ptr != fast_ptr)
		{
			printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			nodes++;
			slow_ptr = slow_ptr->next;
			fast_ptr = fast_ptr->next;
		}
	}
	else
	{
		while (slow_ptr)
		{
			printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			nodes++;
			slow_ptr = slow_ptr->next;
		}
	}

	return (nodes);
}
