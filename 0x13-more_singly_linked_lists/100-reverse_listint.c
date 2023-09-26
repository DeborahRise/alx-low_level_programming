#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: head of node
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	while (*head)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		*head = current;
	}
	(*head) = prev;

	return (*head);
}
