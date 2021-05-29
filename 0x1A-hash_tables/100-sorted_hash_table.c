#include "hash_tables.h"

/**
 * shash_table_create - create hash table with sorted
 * linked list
 * @size: size of the table
 *
 * Return: pointer to hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = NULL;

	if (size == 0)
		return (NULL);
	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = calloc(size, sizeof(shash_node_t **));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	table->size = size;
	return (table);
}

/**
 * shash_table_set - set key and value in hashtable
 * @ht: hashtable
 * @key: key
 * @value: value
 *
 * Return: 1 if sucess, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *node = NULL;
	char *value_copy = NULL;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	/* printf("index is %lu\n", index); */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			value_copy = strdup(value);
			if (value_copy == NULL)
				return (0);
			if (node->value != NULL)
				free(node->value);
			node->value = value_copy;
			break;
		}
		node = node->next;
	}
	if (node == NULL)
		node = add_node_shashtable(ht->array + index, key, value);

	arrange_node_slist(node, &(ht->shead), &(ht->stail));

	return (1);
}




shash_node_t *add_node_shashtable(shash_node_t **list, const char *key,
		      const char *value)
{
	shash_node_t *node = NULL;

	node = malloc(sizeof(shash_node_t));
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

void arrange_node_slist(shash_node_t *node,
				 shash_node_t **list_start,
				 shash_node_t **list_end)
{
	shash_node_t *tmp_head = NULL;

	if (*list_start == NULL)
	{
		*list_start = node;
		*list_end = node;
		node->sprev = NULL;
		node->snext = NULL;
		return;
	}

	if (strcmp((*list_start)->key, node->key) > 0)
	{
		node->snext = *list_start;
		node->sprev = NULL;
		(*list_start)->sprev = node;
		*list_start = node;
		return;
	}
	tmp_head = *list_start;
	while (tmp_head->snext != NULL)
	{
		if (strcmp(tmp_head->snext->key, node->key) > 0)
			break;
		tmp_head = tmp_head->snext;
	}
	node->snext = tmp_head->snext;
	node->sprev = tmp_head;
	tmp_head->snext = node;
	if (node->snext != NULL)
		node->snext->sprev = node;
	else
		*list_end = node;
}



/**
 * shash_table_get - get value for key in hashtable ht
 * @ht: hash table
 * @key: key
 *
 * Return: value corresponding to key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *list_head = NULL;

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


/**
 * shash_table_print - print sorted hash table ht
 * @ht: hashtable
 *
 * Return: nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node = NULL;
	int first = 1;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		if (first)
			first = 0;
		else
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - print sorted hast table ht in reverse
 * @ht: hashtable
 *
 * Return: nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node = NULL;
	int first = 1;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		if (first)
			first = 0;
		else
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
	}
	printf("}\n");
}


/**
 * shash_table_delete - delete sorted hash table ht
 * @ht: hast table
 *
 * Return: nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	if (ht == NULL)
		return;

	free_slist(&(ht->shead));

	free(ht->array);
	free(ht);
}

/**
 * free_slist - free linked list list
 * @list: list
 *
 * Return: nothing
 */
void free_slist(shash_node_t **list)
{
	if (list == NULL || *list == NULL)
		return;

	if ((*list)->snext != NULL)
		free_slist(&((*list)->snext));

	free((*list)->key);
	free((*list)->value);
	free((*list));
	*list = NULL;
}
