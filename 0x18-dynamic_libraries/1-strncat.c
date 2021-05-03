#include "holberton.h"

/**
 * _strncat - concatenate two strings
 * @dest: string destiny
 * @src: string source
 * @n: it will use at most n bytes from src
 * Return: Returns a pointer to the destiny string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, k = 0;

	for (i = 0; 1; i++)
	{
		if (*(dest + i) == 0)
		{
			while (k < n && *(src + k) != 0)
			{
				*(dest + i) = *(src + k);
				i++;
				k++;
			}
			*(dest + i) = 0;
			break;
		}
	}
	return (dest);
}
