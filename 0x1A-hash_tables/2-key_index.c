#include "hash_tables.h"

/**
 * key_index - return index to place key in a hash
 * table of size size
 * @key: key
 * @size: hashtable's size
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key,
			    unsigned long int size)
{
	unsigned long int hash = 0;

	hash = hash_djb2(key);
	return (hash % size);
}
