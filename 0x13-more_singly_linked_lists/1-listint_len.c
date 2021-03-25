#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: list to print
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next != NULL)
	{
		return (listint_len(h->next) + 1);
	}
	return (1);
}
