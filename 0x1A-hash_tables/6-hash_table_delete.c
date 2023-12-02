#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: the hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp1, *temp2;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		temp1 = ht->array[i];
		while (temp1)
		{
			if (temp1->key && temp1->value)
			{
				temp2 = temp1;
				temp1 = temp1->next;
				free(temp2->key);
				free(temp2->value);
				free(temp2);
				temp2 = NULL;
			}
		}
		free(temp1);
		temp1 = NULL;
	}
	free(ht->array);
	free(ht);
}
