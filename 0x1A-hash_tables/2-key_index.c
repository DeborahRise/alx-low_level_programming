#include "hash_tables.h"
#include <string.h>

/**
 * key_index - a function that gives you the index of a key.
 * @key: the key parameter
 * @size: size of table
 * Return: the index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
