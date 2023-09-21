#include "lists.h"

/**
 * add_node - a function that adds a new node
 * at the beginning of a list_t list.
 * @head: head of node
 * @str: value of elements
 * Return: New node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *) malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	if (!head)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);

}
