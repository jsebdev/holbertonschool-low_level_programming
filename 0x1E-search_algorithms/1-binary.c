#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array
 * @size: array's size
 * @value: value to search
 * Return: return index of first element with value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int mid;
	int upindex;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array: ");
	print_array(array, size);

	mid = (size - 1) / 2;
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (binary_search(array, mid, value));
	upindex = binary_search(array + mid + 1, size - mid - 1, value);
	return (upindex == -1 ? -1 : mid + 1 + upindex);
}
