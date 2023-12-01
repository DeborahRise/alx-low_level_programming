#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - a function that prints a hash table.
 * @ht: hash table
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, flag = 0;
	hash_node_t *temp;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			if ((temp->key) && (temp->value))
			{
				printf("'%s': '%s'", temp->key, temp->value);
				flag = 1;

				temp = temp->next;
				if (temp)
					printf(", ");
			}
		}
		if (i < ht->size - 1 && ht->array[i + 1] && flag)
			printf(", ");

	}
	printf("}\n");
}
