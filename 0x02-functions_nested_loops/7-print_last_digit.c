#include "holberton.h"

/**
 * _abs returns the absolute value of an int
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
