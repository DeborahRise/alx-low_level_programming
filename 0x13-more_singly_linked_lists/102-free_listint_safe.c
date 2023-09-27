#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: pointer to pointer of head to node
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t record = 0;
	listint_t *staff, *boss = *h;

	if (h == NULL)
		return (0);

	while (boss)
	{
		record++;
		staff = boss;
		boss = boss->next;
		free(staff);

		if (staff > boss)
			break;
	}
	*h = NULL;
	return (record);
}
