#include "holberton.h"

/**
 * _islower checks if a char is lowercase or uppercase
 * Return: 1 if char is lowercase 0 if is somthing else
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
