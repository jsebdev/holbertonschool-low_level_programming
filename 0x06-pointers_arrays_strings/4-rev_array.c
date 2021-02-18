#include "holberton.h"

/**
 * reverse_array - reverse array of int
 * @a: pointer to first element of array
 * @n: size of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0, aux;

	for (; i < n / 2; i++)
	{
		aux = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = aux;
	}
}
