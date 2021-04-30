#include "lists.h"

/**
 * print_dlistint - print a dlistint list
 * @h: list
 * Return: returns size of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes_count = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			nodes_count++;
			printf("%d\n", h->n);
			h = h->next;
		}
		return (nodes_count);
	}
	return (0);
}
