# include "holberton.h"

/**
 * print_rev - print a string in reverse
 * @s: string to print
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (1)
	{
		if (*(s + len) != 0)
			len++;
		else
			break;
	}

	for (; len > 0; len--)
	{
		_putchar(*(s + len - 1));
	}

	_putchar('\n');
}
