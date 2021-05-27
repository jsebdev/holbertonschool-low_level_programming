#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;

	if (key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	update_key((ht->array) + index, key, value);


	return (1);
}


hash_node_t *update_key(hash_node_t **list, const char *key,
	const char *value)
{
	hash_node_t *node = NULL;
	char *new_value = NULL;

	node = *list;
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (NULL);
			if (node->value != NULL)
				free(node->value);
			node->value = new_value;
			return (node);
		}
		node = node->next;
	}
	return (add_node(list, key, value));
}


hash_node_t *add_node(hash_node_t **list, const char *key,
		      const char *value)
{
	hash_node_t *node = NULL;

	node = malloc(sizeof(hash_node_t *));
	if (node == NULL)
		return (NULL);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = *list;
	*list = node;
	return (node);
}
