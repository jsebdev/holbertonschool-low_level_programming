#include "lists.h"


/**
 * check_adrs2 - check if address is already in list
 * @adr: address to compare
 * @adrs: list of arrays to compare
 * Return: 1 if addres is not yet in the list, 0 otherwise
 */
int check_adrs2(const listint_t *adr, listint_t *head, int nodes)
{
	if (nodes > 0)
	{
		if (adr == head)
			return (0);
		else if (head->next)
			return (check_adrs2(adr, head->next, nodes - 1));
	}
	return (1);
}


/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: linked list.
 * Return:  The address of the node where the loop
 * starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	int nodes = 0;
	listint_t *tmp_node;

	if (head == NULL)
		return (0);

	tmp_node = head;
	while (tmp_node)
	{
		if (check_adrs2(tmp_node, head, nodes))
		{
			nodes++;
			tmp_node = tmp_node->next;
		}
		else
		{
			return (tmp_node);
		}
	}
	return (NULL);
}

