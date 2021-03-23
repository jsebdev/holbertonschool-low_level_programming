#include "lists.h"

/**
 * free_list_adr - frees a list
 * @head: list to free
 * Return: nothing
 */
void free_list_adr(list_adr *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
	{
		free_list_adr(head->next);
	}
	free(head);
}

/**
 * add_nodeadr - adds a new node at the beginning of a listint_t list
 * @head: list
 * @adr: address of node
 * Return: the address of the new element, or NULL if it failed
 */
list_adr *add_nodeadr(list_adr **head, const listint_t *adr)
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
 * check_adrs - check if address is already in list
 * @adr: address to compare
 * @adrs: list of arrays to compare
 * Return: 1 if addres is not yet in the list, 0 otherwise
 */
int check_adrs(const listint_t *adr, list_adr *adrs)
{
	if (adrs == NULL)
		return (1);
	if ((void *)adr == (void *)(adrs->adr))
		return (0);
	else if (adrs->next)
		return (check_adrs(adr, adrs->next));
	return (1);
}

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

