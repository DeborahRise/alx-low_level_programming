#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * and sets the head to NULL
 * @head: first node
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL && *head == NULL)
	{
		return;
	}

	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
