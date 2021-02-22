#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: principal string
 * @accept: set of bytes to look for
 * Return: Returns a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;
	char *r = NULL;

	for (i = 0; *(s + i) != 0 && r == NULL; i++)
	{
		for (j = 0; *(accept + j) != 0; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				r = (s + i);
				break;
			}
		}
	}
	return (r);
}
