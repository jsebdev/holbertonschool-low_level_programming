#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to be checked
 * Return: the last digit of a number
 */

int print_last_digit(int n)
{
	/* l: last digit */
	int l;

	l = n % 10;
	if (n >= 0)
	{
		_putchar(l + '0');
		return (l);
	}
	else
	{
		l = -l;
		_putchar(l + '0');
		return (l);
	}
}
