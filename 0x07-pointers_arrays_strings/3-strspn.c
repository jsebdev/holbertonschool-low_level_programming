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
	unsigned int i = 0, j = 0, n;

	for (i = 0; *(s + i) != 0; i++)
	{
		for (j = 0; *(accept + j) != 0; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				n++;
				/* printf("%c = %c ? ", *(s + i), */
				/*        *(accept + j)); */
				/* printf("ahora n es mayor n=%d i=%d j=%d\n", */
				       /* n, i, j); */
				break;
			}
		}
	}
	return (n);
}
