#include "holberton.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: returns the length of the string
 */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s == 0)
		return (0);
	else
		l = 1 + _strlen_recursion(s + 1);

	return (l);
}
