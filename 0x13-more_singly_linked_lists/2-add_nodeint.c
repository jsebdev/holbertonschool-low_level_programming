#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: list
 * @n: numbert
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp_head = NULL;

	tmp_head = malloc(sizeof(listint_t));
	if (tmp_head)
	{
		tmp_head->n = n;
		tmp_head->next = *head;
		*head = tmp_head;
		return (tmp_head);
	}
	return (NULL);
}
