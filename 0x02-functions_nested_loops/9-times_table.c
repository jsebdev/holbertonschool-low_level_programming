#include "holberton.h"

/**
 * _abs returns the absolute value of an int
 */
void times_table(void)
{
	int i, j, mul, first_digit;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			mul = i * j;
			first_digit = mul / 10;
			if (first_digit == 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(first_digit + '0');
			}
			_putchar((mul % 10) + '0');
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
