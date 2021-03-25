#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: list to print
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	if (h->next != NULL)
		return (print_listint(h->next) + 1);
	return (1);
}
