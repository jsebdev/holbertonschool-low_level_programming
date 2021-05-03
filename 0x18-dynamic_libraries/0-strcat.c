#include "holberton.h"

/**
 * _strcat - concatenate two strings
 * @dest: string destiny
 * @src: string source
 * Return: Returns a pointer to the destiny string
 */
char *_strcat(char *dest, char *src)
{
	int i, k = 0;

	for (i = 0; 1; i++)
	{
		if (*(dest + i) == 0)
		{
			do {
				*(dest + i) = *(src + k);
				i++;
				k++;
			} while (*(src + k) != 0);
			break;
		}
	}
	return (dest);
}
