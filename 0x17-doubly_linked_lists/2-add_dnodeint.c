#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: list
 * @n: number
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *h;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (0);

	if (head == NULL)
		h = NULL;
	else
		h = *head;

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = h;

	(*head) = newnode;

	return (newnode);
}
