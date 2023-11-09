#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: head of list
 * @n: data of new node
 * Return: address of new element or Null on Fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!(*head))
	{
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}

	return (*head);
}
