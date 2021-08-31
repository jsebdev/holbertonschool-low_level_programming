#include "search_algos.h"

/**
 * advanced_binary- searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array
 * @size: array's size
 * @value: value to search
 * Return: return index of first element with value or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	int mid, upindex, downindex;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array: ");
	print_array(array, size);

	mid = (size - 1) / 2;
	if (array[mid] == value)
	{
		downindex = (mid > 0) ? advanced_binary(array, mid + 1, value) : 0;
		return (downindex);
	}
	else if (array[mid] > value)
		return (advanced_binary(array, mid, value));
	upindex = advanced_binary(array + mid + 1, size - mid - 1, value);
	return (upindex == -1 ? -1 : mid + 1 + upindex);
}

