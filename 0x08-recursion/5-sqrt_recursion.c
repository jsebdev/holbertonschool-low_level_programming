#include "holberton.h"

/**
 * gess_sqrt - guess if s is the sqrt of n
 * @n: number
 * @s: guessed sqrt
 * @last_s: last guessed sqrt
 * Return: returns the natural sqrt of n or -1 if natural sqrt
 * does not exits
 */
int gess_sqrt(int n, int s, int last_s)
{
	int aux = s;

	if (s * s == n)
	{
		return (s);
	}
	s = ((n / s) + s) / 2;
	if (s == aux || s == last_s)
		return (-1);
	s = gess_sqrt(n, s, aux);
	return (s);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (gess_sqrt(n, 1, 1));
}
