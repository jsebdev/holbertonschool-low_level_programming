#include "lists.h"

/**
 * free_listint_safe - free a list
 * @h: linked list.
 * Return:  the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	list_adr *addrs = NULL;
	int nodes = 0;
	listint_t *tmp_node, *free_next;

	if (h == NULL)
		return (0);

	tmp_node = *h;
	while (tmp_node)
	{
		if (check_adrs(tmp_node, addrs))
		{
			add_nodeadr(&addrs, tmp_node);
			nodes++;
			free_next = tmp_node;
			tmp_node = tmp_node->next;
			free(free_next);
		}
		else
		{
			break;
		}
	}
	*h = NULL;
	free_list_adr(addrs);
	return (nodes);
}

