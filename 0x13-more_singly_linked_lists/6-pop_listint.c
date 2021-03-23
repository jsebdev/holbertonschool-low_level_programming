#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: list to print
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp_head = NULL;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp_head = *head;
	*head = (*head)->next;
	free(tmp_head);
	return (n);
}
