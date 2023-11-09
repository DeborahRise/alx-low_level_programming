#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * @head: head of list
 * Return: sum of al data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum = 0;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
