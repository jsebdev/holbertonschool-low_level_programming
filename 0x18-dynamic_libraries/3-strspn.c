#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: principal string
 * @accept: sub string
 * Return: Returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, n = 0, insegment = 0, match;

	for (i = 0; *(s + i) != 0; i++)
	{
		match = 0;
		for (j = 0; *(accept + j) != 0; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				n++;
				insegment = 1;
				match = 1;
				break;
			}
		}
		if (insegment && !match)
		{
			break;
		}
	}
	return (n);
}
