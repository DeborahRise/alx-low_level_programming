#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set -  a function that adds an element to the hash table.
 * @ht: the hashtable to be worked on
 * @key: the key of the item
 * @value: value pair of the key
 * Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_item, *temp;

	if (!ht || !key || *key == 48 || value == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	new_item = malloc(sizeof(hash_node_t));
	if (!new_item)
		return (0);
	new_item->key = strdup(key);
	new_item->value = strdup(value);

	if (!(new_item->key) || !(new_item->value))
	{
		free(new_item->key);
		free(new_item->value);
		free(new_item);
		return (0);
	}
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			new_item->next = temp->next;
			free(new_item->key);
			free(new_item->value);
			free(new_item);
			return (1);
		}
		temp = temp->next;
	}
	new_item->next = ht->array[index];
	ht->array[index] = new_item;
	return (1);
}
