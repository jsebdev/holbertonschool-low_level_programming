#include "holberton.h"

/**
 * print_line - prints a line
 * @n: long of the line
 * Return: does not return anything
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
