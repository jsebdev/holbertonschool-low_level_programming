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

	while (*(s1 + len1))
		len1++;
	while (*(s2 + len2))
		len2++;

	nstr = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; i < len1; i++)
		*(nstr + i) = *(s1 + i);
	do {
		*(nstr + i) = *(s2 + i - len1);
		i++;
	} while (*(s2 + i - len1));
	return (nstr);
}
