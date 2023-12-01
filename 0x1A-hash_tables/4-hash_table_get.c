#include "hash_tables.h"

/**
 * hash_table_get -  a function that retrieves a value associated with a key.
 * @ht: the hash table to be looked into
 * @key: key of value to be retrieved
 * Return: Value associated or NULL if key not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (!temp || !(temp->key))
		return (NULL);
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
