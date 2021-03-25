#include "holberton.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: value of bit in index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return ((n & 0x1 << index) >> index);
}
