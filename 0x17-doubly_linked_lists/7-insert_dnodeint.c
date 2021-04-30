#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: list
 * @idx: index to insert node
 * @n: number
 * Return: the address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
				     unsigned int idx,
				     int n)
{
	dlistint_t *tmp_head = NULL, *tmp_node = NULL;
	unsigned int id = 0;

	tmp_node = malloc(sizeof(dlistint_t));
	if (tmp_node)
	{
		tmp_node->n = n;
		if (*h)
		{
			if (idx == 0)
			{
				tmp_node->next = *h;
				tmp_node->prev = NULL;
				*h = tmp_node;
			}
			else
			{
				tmp_head = *h;
				while ((id < idx - 1))
				{
					if (tmp_head->next == NULL)
						return (NULL);
					tmp_head = tmp_head->next;
					id++;
				}
				tmp_node->next = tmp_head->next;
				tmp_node->prev = tmp_head;
				tmp_head->next = tmp_node;
			}
		}
		else
		{
			*h = tmp_node;
			tmp_node->next = NULL;
			tmp_node->prev = NULL;
		}
		return (tmp_node);
	}
	return (NULL);
}
