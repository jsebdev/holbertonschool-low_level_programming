# include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string to print
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (1)
	{
		if (*(str + len) != 0)
			len++;
		else
			break;
	}
	if (len % 2 != 0)
		i = len / 2 + 1;
	else
		i = len / 2;

	for (; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
