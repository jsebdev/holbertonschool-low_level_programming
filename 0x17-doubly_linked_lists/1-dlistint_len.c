#include "lists.h"

/**
 * get_dnodeint_at_index - returns the size of a dlistint
 * @h: list
 * Return: returns the size of h
*/
size_t dlistint_len(const dlistint_t *h)
{
	int nodes_count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			nodes_count++;
			h = h->next;
		}
		return (nodes_count);
	}
	return (0);
}
