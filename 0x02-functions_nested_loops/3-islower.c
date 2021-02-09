#include "holberton.h"

/**
 * _islower -  checks if a char is lowercase or uppercase
 * Returns 1 if char is lowercase
 * Returns 0 otherwise
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
