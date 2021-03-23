#include "lists.h"

/**
 * free_listint2 - frees a list and makes head point to NULL
 * @head: list to free
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;
	if ((*head)->next != NULL)
	{
		free_listint2(&(*head)->next);
	}
	free(*head);
	*head = NULL;
}
