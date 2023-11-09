#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position
 * @h: head of list
 * @idx: index of insertion in list
 * @n: data of new node for insertion
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *temp2, *new_node;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		if (!(*h))
			*h = new_node;
		else
		{
			new_node->next = *h;
			(*h)->prev = new_node;
			*h = new_node;
		}
	}
	else
	{
		i = 0;
		temp = *h;
		while (i < (idx - 1) && temp->next)
		{
			temp = temp->next;
			i += 1;
		}
		if (i < (idx - 1) && temp->next == NULL)
			return (NULL);
		if (temp->next)
		{
			temp2 = temp->next;
			temp->next = new_node;
			temp2->prev = new_node;
			new_node->next = temp2;
			new_node->prev = temp;
		}
		else
		{
			temp->next = new_node;
			new_node->prev = temp;
		}
	}
	return (new_node);
}
