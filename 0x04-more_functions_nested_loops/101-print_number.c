#include "holberton.h"
/* #include <stdio.h> */

/**
 * mypower - power of numbers
 * @a: base
 * @b: power
 * Return: power of a^b
 */

int mypower(int a, int b)
{
	int i, r = 1;

	for (i = 0; i < b; i++)
	{
		r = r * a;
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
	int potencia, potencia2;

	potencia = mypower(10, d);
	potencia2 = mypower(10, d - 1);

	return ((((n % potencia) - (n % potencia2)) / potencia2));
}

/**
 * print_number - prints a number
 * @n: number to print
 * Return: always 0
 */
void print_number(int n)
{
	unsigned int i, digito, started = 0;

	if (n < 0)
	{
		/* printf("El valor original de n es %d\n", n); */
		_putchar('-');
		n = n * -1;
		/* printf("El nuevo valor de n es %d\n", n); */
	}
	if (n == 0)
	{
		_putchar(0 + '0');
	}
	for (i = 11; i > 0; i--)
	{
		digito = getdigit(n, i);
		/* _putchar(i + '0'); */
		/* _putchar('\n'); */
		/* _putchar(digito + '0'); */
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
