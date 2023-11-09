#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list
 * @head: head of list
 * @index: index of node to be returned
 * Return: the nth node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (!head)
		return (NULL);
	i = 0;
	temp = head;
	while (i < index)
	{
		if (!(temp->next))
			return (NULL);
		else
		{
			temp = temp->next;
			i += 1;
		}
	}
	return (temp);
}
