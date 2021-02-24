#include "holberton.h"


/**
 * rem_str1_until_str2 - remove bytes from s1 until is equal to s2
 * @s1: string 1
 * @s2: string 2
 * Return: nothing
 */
void rem_str1_until_str2(char **s1, char **s2)
{
	if (**s1 == '\0')
		return;
	if (**s2 == '*')
	{
		*s2 = *s2 + 1;
		rem_str1_until_str2(s1, s2);
	}
	if (wildcmp(*s1, *s2))
		return;
	*s1 = *s1 + 1;
	rem_str1_until_str2(s1, s2);
}

/**
 * wildcmp - check if two strings are identical
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{

	/* printf("%s -- %s\n", s1, s2); */
	if (*s2 == '*')
	{
		rem_str1_until_str2(&s1, &s2);
	}
	/* printf("%s -- %s\n", s1, s2); */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
