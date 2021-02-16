# include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Return: nothing
 */

/**
 * _puts2 - print the even chars of a string
 * @str: string to print
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	for (; 1; i++)
	{
		if (*(str + i) != 0)
		{
			if (i % 2 == 0)
				_putchar(*(str + i));
		}
		else
			break;
	}
	_putchar('\n');
}
