#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: linked list.
 * @idx: index to insert new node
 * @n: n data for new node
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp_head = NULL, *tmp_node = NULL;
	unsigned int id = 0;

	tmp_node = malloc(sizeof(listint_t));
	if (tmp_node)
	{
		tmp_node->n = n;
		if (*head)
		{
			if (idx == 0)
			{
				tmp_node->next = *head;
				*head = tmp_node;
			}
			else
			{
				tmp_head = *head;
				while ((id < idx - 1) && tmp_head->next)
				{
					tmp_head = tmp_head->next;
					id++;
				}
				tmp_node->next = tmp_head->next;
				tmp_head->next = tmp_node;
			}
		}
		else
		{
			*head = tmp_node;
			tmp_node->next = NULL;
		}
		return (tmp_node);
	}
	return (NULL);
}
