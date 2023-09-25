#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list.
 * @head: head node
 * Return: returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return (0);

	temp = *head;
	*head = (*head)->next;
	free(temp);
	temp =	NULL;

	return ((*head)->n);
}
