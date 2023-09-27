#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: head of nodes
 * Return: The address of the node
 * where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *main = head;
	listint_t *sub = head;

	if (!head)
		return  (NULL);
	if (head == head->next)
		return (head);
	while (main)
	{
		main = main->next;
		sub = head;
		while (main && sub != main)
		{
			if (sub == main->next)
			{
				return (sub);
			}
			sub = sub->next;
		}
	}
	return (main);
}
