#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: linked list.
 * Return:  The address of the node where the loop
 * starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	list_adr *addrs = NULL;
	listint_t *tmp_node;

	if (head == NULL)
		return (0);

	tmp_node = head;
	while (tmp_node)
	{
		if (check_adrs(tmp_node, addrs))
		{
			add_nodeadr(&addrs, tmp_node);
			tmp_node = tmp_node->next;
		}
		else
		{
			free_list_adr(addrs);
			return (tmp_node);
		}
	}
	free_list_adr(addrs);
	return (NULL);
}

