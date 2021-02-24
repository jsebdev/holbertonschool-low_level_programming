#include "holberton.h"

/**
 * guess_primo - check if n can be evenly divided by s and any number
 * less than s
 * @n: number
 * @s: second number
 * Return: returns 1 if n cannot be devides by any number greater than 1
 * and equal or less than s, otherwise returns 0;
 */
int guess_primo(int n, int s)
{
	if (s == 1)
		return (1);
	if (n % s == 0)
		return (0);
	return (guess_primo(n, s - 1));
}

/**
 * is_prime_number - check if a number is prime
 * @n: number
 * Return: 1 if n is prime otherwise returns 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (guess_primo(n, n - 1));
}
