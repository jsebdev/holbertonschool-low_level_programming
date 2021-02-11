#include "holberton.h"

/*
 * _isdigit - check if a char is a digit
 * @c: char to be checked
 * Return: 1 if c is a digit 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
