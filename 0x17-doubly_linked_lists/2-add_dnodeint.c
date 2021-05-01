#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: list
 * @n: number
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);


	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;
	(*head)->prev = newnode;

	(*head) = newnode;

	return (newnode);
}
