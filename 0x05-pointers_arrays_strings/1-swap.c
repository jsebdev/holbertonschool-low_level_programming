# include "holberton.h"

/**
 * swap_int - swap two int values
 * @a: first variable
 * @b: second variable
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *b;
	*b = *a;
	*a = aux;
}
