#include "function_pointers.h"
/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array.
 * @array: array
 * @size: array's size
 * @action: function to execute
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
