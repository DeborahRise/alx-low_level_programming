#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: head of nodes
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *transverse;

	if (!head)
		return;

	transverse = head;
	while (transverse->next)
	{
		free(transverse->str);
		free(transverse);
		transverse = transverse->next;
	}
	free(transverse->str);
	free(transverse);
	free(head);

}
