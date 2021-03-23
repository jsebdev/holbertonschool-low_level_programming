#include "lists.h"

/**
 * rev_l - makes node p1 point to p0 and iterate shifting nodes
 * until last node in list is pointing to previous node
 * @p0: node 0
 * @p1: node 1
 * @p2: node 2
 * Return: a pointer to the first node of the reversed list
 */
listint_t *rev_l(listint_t *p0, listint_t *p1, listint_t *p2)
{
	p1->next = p0;
	if (p2)
	{
		return (rev_l(p1, p2, p2->next));
	}
	else
	{
		return (p1);
	}
}

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: linked list.
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (NULL);
	*head = rev_l(NULL, *head, (*head)->next);
	return (*head);
}


/*here a version using loops*/
#if 0
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p1 = NULL, *p2 = NULL, *p3 = NULL;

	if (head != NULL && *head != NULL)
	{
		p1 = p2 = NULL;
		p3 = *head;

		while (p3)
		{
			p1 = p2;
			p2 = p3;
			p3 = p3->next;

			p2->next = p1;
		}
		*head = p2;
		return (*head);
	}
	return (NULL);
}
#endif
