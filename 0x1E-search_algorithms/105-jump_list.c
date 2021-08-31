#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: list
 * @size: array's size
 * @value: value to search
 * Return: return index of first node with value or -1 if not found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, i;
	listint_t *head_pos = list, *prev_head = list;

	if (list == NULL)
		return (NULL);

	step = sqrt(size);
	while (head_pos->next != NULL && head_pos->n < value)
	{
		prev_head = head_pos;
		for (i = 0; i < step && head_pos->next != NULL; i++)
			head_pos = head_pos->next;
		printf("Value checked at index [%lu] = [%i]\n",
				head_pos->index, head_pos->n);
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
int jump_search(int *array, size_t size, int value)
{
	size_t step, pos = 0, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	while (array[pos] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", pos, array[pos]);
		pos += step;
		if (pos >= size)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", pos - step, pos);
	for (i = pos - step; i <= pos && i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
