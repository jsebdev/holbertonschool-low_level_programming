#include "function_pointers.h"
/**
 * int_index - search for an integer in an array using a
 * compare function
 * @array: array
 * @size: array's size
 * @cmp: compare function to use
 * Return: nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
