#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: list
 * @index: node's index to return
 * Return: returns the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp_node = head;
	unsigned int tmp_index = 0;

	if (head == NULL)
		return (NULL);

	while (tmp_index != index)
	{
		if (tmp_node->next)
			tmp_node = tmp_node->next;
		else
			return (NULL);
		tmp_index++;
	}

	return (tmp_node);
}

