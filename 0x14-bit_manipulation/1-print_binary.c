#include "holberton.h"

/**
 * print_binary_rest - prints the binary representation of
 * a number but the number cero
 * @n: number
 * Return: nothing
 */

void print_binary_rest(unsigned long int n)
{
	if (n)
	{
		print_binary_rest(n >> 1);
		if (n & 0x1)
			_putchar('1');
		else
			_putchar('0');
	}
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: number
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_binary_rest(n);
}
