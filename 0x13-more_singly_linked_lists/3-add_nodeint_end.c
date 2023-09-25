#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 * @head: head of node
 * @n: the data in new node
 * Return: the address of the new element,
 * or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;

	if (!*head)
	{
		newnode->next =	NULL;
		*head = newnode;
		return (newnode);
	}

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	newnode->next = NULL;
	temp->next = newnode;
	return (newnode);
}
