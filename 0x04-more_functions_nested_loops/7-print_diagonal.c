#include "holberton.h"

/**
 * print_diagonal - prints a diagonal
 * @n: long of the line
 * Return: does not return anything
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
