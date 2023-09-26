#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts new node
 * at a given position
 * @head: head of node
 * @idx: the nth index to be retrieved
 * @n: data of newly inserted node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next =	*head;
		*head = newnode;
		return (newnode);
	}

	temp = *head;

	i = 0;
	while (i < idx - 1)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
		i++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
