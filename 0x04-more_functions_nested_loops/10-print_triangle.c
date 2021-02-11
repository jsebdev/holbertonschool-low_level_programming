#include "holberton.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 * Return: does not return anything
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j < i + 1; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
