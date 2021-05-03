# include "holberton.h"

/**
 * _strcpy - copy a string into another string
 * @dest: buffer destination
 * @src: string to copy
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; *(src + i) != 0; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = 0;
	return (dest);
}
