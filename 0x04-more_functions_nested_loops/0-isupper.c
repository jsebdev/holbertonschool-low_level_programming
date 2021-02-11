#include "holberton.h"

/*
 * _isupper - check if a char is a upper character
 * @c: char to be checked
 * Return: 1 if c is uppercase 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
