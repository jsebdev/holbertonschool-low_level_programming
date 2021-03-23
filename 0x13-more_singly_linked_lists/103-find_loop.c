#include "lists.h"


/**
 * free_list_adr2 - frees a list
 * @head: list to free
 * Return: nothing
 */
void free_list_adr2(list_adr *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
	{
		free_list_adr2(head->next);
	}
	free(head);
}

/**
 * add_nodeadr2 - adds a new node at the beginning of a listint_t list
 * @head: list
 * @adr: address of node
 * Return: the address of the new element, or NULL if it failed
 */
list_adr *add_nodeadr2(list_adr **head, const listint_t *adr)
{
	list_adr *tmp_head = NULL;

	tmp_head = malloc(sizeof(list_adr));
	if (tmp_head)
	{
		tmp_head->next = *head;
		tmp_head->adr = adr;
		*head = tmp_head;
		return (tmp_head);
	}
	return (NULL);
}

/**
 * check_adrs2 - check if address is already in list
 * @adr: address to compare
 * @adrs: list of arrays to compare
 * Return: 1 if addres is not yet in the list, 0 otherwise
 */
int check_adrs2(const listint_t *adr, list_adr *adrs)
{
	if (adrs == NULL)
		return (1);
	if ((void *)adr == (void *)(adrs->adr))
		return (0);
	else if (adrs->next)
		return (check_adrs2(adr, adrs->next));
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
	list_adr *addrs = NULL;
	listint_t *tmp_node;

	if (head == NULL)
		return (0);

	tmp_node = head;
	while (tmp_node)
	{
		if (check_adrs2(tmp_node, addrs))
		{
			add_nodeadr2(&addrs, tmp_node);
			tmp_node = tmp_node->next;
		}
		else
		{
			free_list_adr2(addrs);
			return (tmp_node);
		}
	}
	free_list_adr2(addrs);
	return (NULL);
}

