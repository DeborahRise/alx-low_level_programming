#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely
 * @head: A pointer to the head of the list
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise;
	const listint_t *hare;
	size_t fan, reffree = 0;

	tortoise = head;
	while (tortoise != NULL)
	{
		if (!head)
		{
			exit(98);
		}

		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		reffree++;

		tortoise = tortoise->next;
		hare = head;
		fan = 0;
		while (fan < reffree)
		{

			if (tortoise == hare)
			{
				printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
				return (reffree);
			}
			hare = hare->next;
			fan++;
		}
	}
	return (reffree);
}
