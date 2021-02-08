#include "holberton.h"

/**
 * islower checks if a char is lowercase or uppercase
 * Returns 1 if char is lowercase
 * Returns 0 otherwise
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
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
