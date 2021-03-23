#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: linked list.
 * Return:  the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	list_adr *addrs = NULL;
	int nodes = 0;
	const listint_t *tmp_node;

	if (head == NULL)
		return (0);

	tmp_node = head;
	while (tmp_node)
	{
		if (check_adrs(tmp_node, addrs))
		{
			printf("[%p] %d\n", (void *)tmp_node, tmp_node->n);
			add_nodeadr(&addrs, tmp_node);
			nodes++;
			tmp_node = tmp_node->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)tmp_node, tmp_node->n);
			break;
		}
	}
	free_list_adr(addrs);
	return (nodes);
}

