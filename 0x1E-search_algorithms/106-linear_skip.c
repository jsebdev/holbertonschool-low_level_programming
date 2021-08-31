#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: list
 * @size: array's size
 * @value: value to search
 * Return: return index of first node with value or -1 if not found
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *head_pos = list, *prev_head = list;

	if (list == NULL)
		return (NULL);

	while (head_pos->next != NULL && head_pos->n < value)
	{
		prev_head = head_pos;
		if (head_pos->express == NULL)
			while (head_pos->next)
				head_pos = head_pos->next;
		else
		{
			head_pos = head_pos->express;
			printf("Value checked at index [%lu] = [%i]\n",
			       head_pos->index, head_pos->n);
		}
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev_head->index, head_pos->index);
	while (prev_head != head_pos->next && prev_head->n <= value)
	{
		printf("Value checked at index [%lu] = [%i]\n",
		       prev_head->index, prev_head->n);
		if (prev_head->n == value)
			return (prev_head);
		prev_head = prev_head->next;
	}
	return (NULL);

}
