#include "holberton.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to allocate
 * Return: pointer to allocated memory wich  contains
 * s1, followed by the first n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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
	len2 = (len2 > (int) n) ? (int) n : len2;
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
