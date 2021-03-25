#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number in string
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1 b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;

	if (b == NULL)
		return (0);

	for (; *b; b++)
	{
		if (*b != '1' && *b != '0')
			return (0);

		r = 2 * r + (*b - '0');
	}
	return (r);
}
