#include "lists.h"


/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: list
 * @n: number
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *h;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (0);
	newnode->n = n;
	newnode->next = NULL;

	if (head == NULL || *head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	h = *head;
	while (h->next != NULL)
		h = h->next;

	newnode->prev = h;
	h->next = newnode;
	return (newnode);
}
