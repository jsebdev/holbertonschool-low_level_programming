#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Returns 0 if strings are equal, 15 if s1 is greater than s2
 * and -15 if s1 is less than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	do {
		diff = *(s1 + i) - *(s2 + i);
		if (diff > 0)
			diff = 1;
		if (diff < 0)
			diff = -1;
		i++;
	} while (diff == 0 && *(s1 + i) != 0 && *(s2 + i) != 0);
	return (diff);
}
