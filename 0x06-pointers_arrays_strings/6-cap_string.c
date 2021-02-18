#include "holberton.h"

/**
 * cap_string - capitalize every word in a string
 * @s: string to change
 * Return: a string changed
 */
char *cap_string(char *s)
{
	int i = 0;

	for (; *(s + i) != 0; i++)
	{
		if (!(*(s + i) >= '!' && *(s + i) <= 126 && *(s + i) != '.')
		    && *(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
			*(s + i + 1) -= 32;
	}
	return (s);
}
