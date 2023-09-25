#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: first node
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
	{
		return;
	}

	temp = head;

	while (temp->next)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(head);
	head = temp;
}
