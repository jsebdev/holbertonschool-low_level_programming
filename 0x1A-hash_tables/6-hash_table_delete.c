#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table ht
 * @ht: hast table
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			free_list(ht->array + i);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * free_list - free linked list list
 * @list: list
 *
 * Return: nothing
 */
void free_list(hash_node_t **list)
{
	if (list == NULL || *list == NULL)
		return;

	if ((*list)->next != NULL)
		free_list(&((*list)->next));

	free((*list)->key);
	free((*list)->value);
	free((*list));
	*list = NULL;
}
