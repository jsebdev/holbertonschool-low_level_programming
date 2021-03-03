#include "holberton.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated
*/
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i = 0;
	char *nstr;

	if (s1 != NULL)
	{
		while (*(s1 + len1))
			len1++;
	}
	if (s2 != NULL)
	{
		while (*(s2 + len2))
			len2++;
	}

	nstr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(nstr + i) = *(s1 + i);
	for (; i < len1 + len2; i++)
		*(nstr + i) = *(s2 + i - len1);
	*(nstr + i) = '\0';
	return (nstr);
}
