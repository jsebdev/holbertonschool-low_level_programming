#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: array
 * @size: array's size
 * @value: value to search
 * Return: return index of first element with value or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (interpolation_search_recursive(array, size, value, 0));
}

/**
 * interpolation_search_recursive - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: array
 * @size: array's size
 * @value: value to search
 * @initial_index: initial_index for current section of array
 * Return: return index of first element with value or -1 if not found
 */
int interpolation_search_recursive(int *array, size_t size, int value,
		int initial_index)
{
	size_t step;

	if (size == 0)
		return (-1);

	step = (size - 1) * (value - array[0]) / (array[size - 1] - array[0]);
	if (step <= size)
		printf("Value checked array[%lu] = [%i]\n", initial_index + step,
				array[step]);
	else
	{
		printf("Value checked array[%lu] is out of range\n", step);
		return (-1);
	}
	if (array[step] == value)
		return (step);
	else if (array[step] > value)
		return (interpolation_search_recursive(array, step, value, initial_index));
	return (interpolation_search_recursive(array + step + 1, size - step - 1,
			value, initial_index + step + 1) + step + 1);
}
