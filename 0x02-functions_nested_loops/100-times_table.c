#include "holberton.h"

/**
 * print_times_table - it prints the times table up to the parameter given
 * @n: number to print the times table up to
 * Return: does not return anything
 */
void print_times_table(int n)
{
	int i, j, mul, first_digit, second_digit;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			if (n != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			for (j = 1; j <= n; j++)
			{
				mul = i * j;
				first_digit = mul / 100;
				second_digit = (mul - first_digit * 100) / 10;
				if (first_digit == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(first_digit + '0');
				}
				if (second_digit == 0 && first_digit == 0)
				{
					_putchar(' ');
				}
				else
				{
					_putchar(second_digit + '0');
				}
				_putchar((mul % 10) + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
