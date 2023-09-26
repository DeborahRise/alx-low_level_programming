#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: head of node
 * @index: the nth index to be retrieved
 * Return: returns the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (!head)
		return (NULL);

	temp = head;

	i = 0;
	while (i < index && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
