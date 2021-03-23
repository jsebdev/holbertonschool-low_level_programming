#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: list
 * @n: numbert
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp_head = NULL, *tmp_node = NULL;

	tmp_node = malloc(sizeof(listint_t));
	if (tmp_node)
	{
		tmp_node->n = n;
		tmp_node->next = NULL;
		if (*head)
		{
			tmp_head = *head;
			while (tmp_head->next)
				tmp_head = tmp_head->next;
			tmp_head->next = tmp_node;
		}
		else
			*head = tmp_node;
	}
	return (NULL);
}
