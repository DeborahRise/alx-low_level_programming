#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index
 * @head: head of node
 * @index: node at this index will be deleted
 * Return: 1 for success, -1 for failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *last, *current;
	unsigned int i;

	if (!(*head))
		return (0);

	if ((*head)->next == NULL && index == 0)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		current = NULL;
		return (1);
	}

	last = *head;
	current = *head;

	i = 0;
	while (i < index)
	{
		last = current;
		current = current->next;
		if (!current)
		{
			return (-1);
		}
		i++;
	}
	last->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
