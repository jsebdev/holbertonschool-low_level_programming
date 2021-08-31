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
	if (array == NULL)
		return (-1);

	return (bin_search_recursive(array, size, 0, value));
}

/**
 * bin_search_recursive - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array
 * @size: array's size
 * @initial_index: initial_index of current portion of the array being searched
 * @value: value to search
 * Return: return index of first element with value or -1 if not found
 */
int bin_search_recursive(int *array, size_t size, size_t initial_index,
			 int value)
{
	size_t mid;

	if (size == 0)
		return (-1);
	printf("Searching in array: ");
	print_array(array, size);

	mid = (size - 1) / 2;
	if (array[mid] == value)
		return (initial_index + mid);
	else if (array[mid] > value)
		return (bin_search_recursive(array, mid, initial_index, value));
	return (bin_search_recursive(array + mid + 1, size - mid - 1, mid + 1,
				     value));
}

/**
 * print_array - print an int array separated by commas
 * @array: array
 * @size: array's size
 */
void print_array(int *array, size_t size)
{
	size_t i;

	i = 0;
	while (i < size)
	{
		printf("%i", array[i]);
		i++;
		if (i != size)
			printf(", ");
	}
	printf("\n");
}
