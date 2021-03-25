#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number
 * @m: second number
 * Return: returns the number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits_flipped = 0, i;
	unsigned long int diff;

	diff = n ^ m;

	for (i = 0; i < 64; i++)
	{
		bits_flipped += ((diff >> i) & 1);
	}
	return (bits_flipped);
}
