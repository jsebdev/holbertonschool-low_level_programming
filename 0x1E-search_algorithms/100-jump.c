#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: array
 * @size: array's size
 * @value: value to search
 * Return: return index of first element with value or -1 if not found
 */

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
	if (pos == 0)
		step = 0;
	printf("Value found between indexes [%lu] and [%lu]\n", pos - step, pos);
	for (i = pos - step; i <= pos && i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
