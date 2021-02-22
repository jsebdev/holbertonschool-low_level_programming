#include "holberton.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: matrix
 * @size: size of matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + i * (size + 1));
	}
	printf("%d, ", sum);
	sum = 0;
	for (i = 0; i < size; i++)
	{
		sum += *(a + (i + 1) * (size - 1));
	}
	printf("%d\n", sum);
}
