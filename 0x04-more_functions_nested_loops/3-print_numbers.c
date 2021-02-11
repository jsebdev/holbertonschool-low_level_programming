#include "holberton.h"

/*
 * print_numbers - print numbers from 0 to 9
 * Return: does not return anything
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
