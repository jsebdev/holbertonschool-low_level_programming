#include "lists.h"

/**
 * dlistint_len - returns the length of a linked list h
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
