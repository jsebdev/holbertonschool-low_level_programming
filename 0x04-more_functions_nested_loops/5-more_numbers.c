#include "holberton.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 * Return: does not return anything
 */

void more_numbers(void)
{
	int c, n, mayor_10;

	for (c = 0; c <= 9; c++)
	{
		for (n = 0; n <= 14; n++)
		{
			mayor_10 = n / 10;
			if (mayor_10)
			{
				_putchar('1');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
