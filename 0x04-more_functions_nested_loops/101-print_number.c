#include "holberton.h"


/**
 * mypower - power of numbers
 * @b: power
 * Return: power of a^b
 */

unsigned int mypower(unsigned int b)
{
	unsigned int i, r = 1;

	for (i = 0; i < b; i++)
	{
		r = r * 10;
	}
	return (r);
}

/**
 * getdigit - finds the digit of a number
 * @n: number to evaluate
 * @d: digit to look for
 * Return: digit
 */
int getdigit(int n, int d)
{
	unsigned int potencia;

	potencia = mypower(d - 1);

	return ((n / potencia) % 10);
}

/**
 * print_number - prints a number
 * @n: number to print
 * Return: always 0
 */
void print_number(int n)
{
	int i, digito, started = 0;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar(0 + '0');
	}
	for (i = 10; i > 0; i--)
	{
		digito = getdigit(n, i);
		if (started == 1)
		{
			_putchar(digito + '0');
		}
		else if (started == 0 && digito != 0)
		{
			_putchar(digito + '0');
			started = 1;
		}
	}
}
