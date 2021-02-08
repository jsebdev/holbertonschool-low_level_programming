#include "holberton.h"

/**
 * print_alphabet - prints the alphabet
 * Return: does not return
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
