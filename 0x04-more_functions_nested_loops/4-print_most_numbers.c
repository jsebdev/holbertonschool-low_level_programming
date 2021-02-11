#include "holberton.h"

/*
 * print_most_numbers - print numbers from 0 to 9 without 2 and 4
 * Return: does not return anything
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
