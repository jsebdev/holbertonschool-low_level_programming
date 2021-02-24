#include "holberton.h"

/**
 * factorial - returns the factorial of a number
 * @n: number
 * Return: returns the factorial of a number or -1 if number is < 0
 */

int factorial(int n)
{
	int f = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	if (n > 0)
		f = n * factorial(n - 1);
	return (f);
}
