#include "holberton.h"

/**
 * _islower -  checks if a char is lowercase or uppercase
 * Return: 1 if char is lowercase 0 if is something else
 */
int _islower(char c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
