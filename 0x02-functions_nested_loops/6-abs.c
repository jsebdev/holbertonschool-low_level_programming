#include "holberton.h"

/**
 * _abs - returns the absolute value of a number
 * @a: number to be checked
 * Return: the absolute value of a number
 */

int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (-a);
	}
}
