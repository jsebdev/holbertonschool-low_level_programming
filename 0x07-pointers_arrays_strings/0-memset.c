#include "holberton.h"

/**
 * _memset - The _memset() function fills the
 * first n bytes of the memory area pointed
 * to by s with the constant byte b
 * @s: buffert to set
 * @b: char to use
 * @n: number of bytes to set
 * Return: Return a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
