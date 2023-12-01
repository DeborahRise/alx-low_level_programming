#include "hash_tables.h"
#include <stdlib.h>

/*
 * hash_table_create - a function that creates a hash table
 * @size: The size of the HashTable
 * Return: a pointer to the hash table created
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *HashTable;
	unsigned long int i;

	HashTable = malloc(sizeof(hash_table_t));
	if (!HashTable)
		return (NULL);

	HashTable->size = size;
	HashTable->array = malloc(sizeof(hash_node_t *) * size);
	if (!HashTable->array)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		HashTable->array[i] = NULL;
	}

	return (HashTable);
}
