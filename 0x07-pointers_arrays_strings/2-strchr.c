#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s: string
 * @c: character to look for
 * Return: Return a pointer to the first occurrence
 * of the character c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *r = NULL;

	/* for (; *(s + i) != 0; i++) */
	/* { */
	/* 	if (*(s + i) == c) */
	/* 	{ */
	/* 		r = s + i; */
	/* 		break; */
	/* 	} */
	/* } */

	printf("%c\n", c);
	do {
		if (*(s + i) == c)
		{
			r = s + i;
			break;
		}
		i++;
	} while (*(s + i - 1) != 0);
	return (r);
}
