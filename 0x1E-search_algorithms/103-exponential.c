#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
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
		bound *= 2;
		if (bound >= (int)size)
		{
			bound = (int)size - 1;
			break;
		}
	}
	prevbound = bound / 2;
	printf("Value found between indexes [%i] and [%i]\n", prevbound, bound);
	found = binary_search(array + prevbound + 1, bound - prevbound, value);
	return (found + (found == -1 ? 0 : prevbound + 1));
}
