#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: head of list, must be freed
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp1, *temp2;

	if (!head)
		return;
	temp1 = head;
	while (temp1)
	{
		temp2 = temp1->next;
		free(temp1);
		temp1 = temp2;
	}
}
