#include "../hash_tables.h"

int main(void)
{
	char *key = NULL, *value = NULL;
	hash_node_t *node = NULL;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (1);

	key = strdup("algo");
	value = strdup("otro algo");
	node->key = strdup(key);

	if (node->key == NULL)
	{
		free(node);
		return (1);
	}

	node->value = strdup(value);

	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (1);
	}

	free(key);
	free(value);
	free(node->key);
	free(node->value);
	free(node);
	return (0);

}
