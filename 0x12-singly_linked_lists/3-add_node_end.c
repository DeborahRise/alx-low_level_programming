#include "lists.h"

/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: head of node
 * @str: value of elements
 * Return: New node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *transverse;

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
	new->len = strlen(str);

	if (!*head)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		transverse = *head;
		while (transverse->next)
		{
			transverse = transverse->next;
		}
		new->next = NULL;
		transverse->next = new;
	}
	return (new);
}
