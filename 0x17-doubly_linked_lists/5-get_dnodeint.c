#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a
 * dlistint_t linked list.
 * @head: list
 * @index: node's index to return
 * Return: returns the nth node of a dlistint_t linked list
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);

	for (; counter < index; counter++)
	{
		if (head->next != NULL)
			head = head->next;
		else
			return (NULL);
	}

	return (head);
}
