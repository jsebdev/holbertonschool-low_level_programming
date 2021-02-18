#include "holberton.h"

/**
 * print_number - print a number
 * @n: number to print
 * Return: nothing
 */
void print_number(int n)
{
	int lst_digit;

	if (n > -10 && n < 10)
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		_putchar(n + '0');
	}
	else
	{
		if (n >= 10)
			lst_digit = n % 10;
		else
			lst_digit = -n % 10;
		n = n / 10;
		print_number(n);
		_putchar(lst_digit + '0');
	}
}
