#include "holberton.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: buffer destiny
 * @src: buffer to copy
 * @n: number of bytes to copy
 * Return: Return a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
