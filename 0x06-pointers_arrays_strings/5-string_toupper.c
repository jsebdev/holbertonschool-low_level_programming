#include "holberton.h"

/**
 * string_toupper - change lower case letters to upper case in a string
 * @s: string to change
 * Return: a string changed
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; *(s + i) != 0; i++)
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 32;
	}
	return (s);
}
