#include "holberton.h"

/**
 * _strncpy - copy string into buffer
 * @dest: string destiny
 * @src: string source
 * @n: it will use at most n bytes from src
 * Return: Returns a pointer to the destiny string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && *(src + i) != 0; i++)
		*(dest + i) = *(src + i);
	for (; i < n; i++)
		*(dest + i) = 0;

	return (dest);
}
