#include "holberton.h"

/**
 * array_range - creates an array of integers.
 * The array created should contain all the values from min
 * (included) to max (included), ordered from min to max
 * @min: min value
 * @max: max value
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
	{
		*(p + i) = min + i;
	}
	return (p);
}
