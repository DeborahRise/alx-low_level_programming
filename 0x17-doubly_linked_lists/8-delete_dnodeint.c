#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: head of list
 * @index: index at which deletes occurs
 * Return: 1 if success, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *temp2;
	unsigned int i;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
		}
		else
		{
			*head = (*head)->next;
			free((*head)->prev);
			(*head)->prev = NULL;
		}
	}
	else
	{
		i = 0;
		temp = *head;
		while (i < index && temp->next)
		{
			temp = temp->next;
			i += 1;
		}
		if (i < index && temp->next == NULL)
			return (-1);
		if (temp->next)
		{
			temp2 = temp->prev;
			temp2->next = temp->next;
			temp->next->prev = temp2;
			free(temp);
		}
		else
		{
			temp2 = temp->prev;
			temp2->next = NULL;
			free(temp);
			temp = NULL;
		}
	}
	return (1);
}
