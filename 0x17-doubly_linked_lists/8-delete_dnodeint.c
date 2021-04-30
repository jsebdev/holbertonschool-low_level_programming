#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: list
 * @idx: index to insert node
 * @n: number
 * Return: the address of the new node, or NULL if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *tmp_head = NULL, *tmp_node = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp_head = *head;
	if (index == 0)
	{
		tmp_node = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		while (idx < index - 1)
		{
			if (tmp_head == NULL)
				return (-1);
			tmp_head = tmp_head->next;
			idx++;
		}
		tmp_node = tmp_head->next;
		tmp_head->next = tmp_node->next;
		tmp_head->next->prev = tmp_head;
	}
	free(tmp_node);
	return (1);
}
