#include "holberton.h"

/**
 * _isalpha - checks if a char is lowercase or uppercase
 * Return: 1 if char is alphabetic 0 if is somthing else
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
