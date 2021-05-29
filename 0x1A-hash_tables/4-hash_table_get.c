#include "hash_tables.h"

/**
 * hash_table_get - get value for key in hashtable ht
 * @ht: hash table
 * @key: key
 *
 * Return: value corresponding to key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *list_head = NULL;

	if (key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	list_head = ht->array[index];
	while (list_head != NULL)
	{
		if (strcmp(key, list_head->key) == 0)
		{
			return (list_head->value);
		}
		list_head = list_head->next;
	}

	return (NULL);
}

