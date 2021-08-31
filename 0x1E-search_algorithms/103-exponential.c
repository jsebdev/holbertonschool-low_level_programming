#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of
 * integers using the Exponential search algorithm
 * @array: array
 * @size: array's size
 * @value: value to search
 * Return: return index of first element with value or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	int bound = 1, prevbound, found;

	if (array == NULL || size == 0)
		return (-1);
	while (array[bound] < value)
	{
		printf("Value checked array[%i] = [%i]\n", bound, array[bound]);
		prevbound = bound;
		bound *= 2;
		if (bound >= (int)size)
		{
			bound = (int)size - 1;
			break;
		}
	}
	printf("Value found between indexes [%i] and [%i]\n", prevbound, bound);
	found = expo_binary_search(array + prevbound, bound - prevbound + 1, value);
	return (found + (found == -1 ? 0 : prevbound));
}

/**
 * expo_binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array
 * @size: array's size
 * @value: value to search
 * Return: return index of first element with value or -1 if not found
 */
int expo_binary_search(int *array, size_t size, int value)
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
		return (expo_binary_search(array, mid, value));
	upindex = expo_binary_search(array + mid + 1, size - mid - 1, value);
	return (upindex == -1 ? -1 : mid + 1 + upindex);
}
