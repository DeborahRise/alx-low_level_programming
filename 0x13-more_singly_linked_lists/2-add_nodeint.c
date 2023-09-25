#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list.
 * @head: head of node
 * @n: the data in new node
 * Return: the address of the new element,
 * or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

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

	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
