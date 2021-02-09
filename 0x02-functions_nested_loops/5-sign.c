#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 * @n: number to be checked
 * Return: 1 if is above 0, 0 if it's zero and -1 if something else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
