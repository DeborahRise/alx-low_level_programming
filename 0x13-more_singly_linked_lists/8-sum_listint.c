#include "lists.h"

/**
 * sum_listint - a function that returns the sum
 * of all the data (n) of a listint_t linked list.
 * @head: head of node
 * Return: sum of all data or 0 if empty.
 */

int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp;

	if (!head)
		return (0);

	temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}
	return (add);
}
