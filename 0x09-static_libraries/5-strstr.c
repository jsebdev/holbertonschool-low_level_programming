#include "holberton.h"

/**
 * _strstr - finds the first occurrence of
 * the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: first string
 * @needle: sub string
 * Return: Returns a pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;
	char *r = NULL;

	for (i = 0; *(haystack + i) != 0 && r == NULL; i++)
	{
		for (j = 0; r == NULL; j++)
		{
			if (*(needle + j) == 0)
				r = haystack + i;
			if (*(haystack + i + j) != *(needle + j))
				break;
		}
	}
	return (r);
}
