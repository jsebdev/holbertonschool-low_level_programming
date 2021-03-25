#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: linked list.
 * @index: index to delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	listint_t *tmp_head = NULL, *tmp_node = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	tmp_head = *head;
	if (index == 0)
	{
		tmp_node = *head;
		*head = (*head)->next;
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
	}
	free(tmp_node);
	return (1);
}

