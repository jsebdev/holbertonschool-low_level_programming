# include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Return: nothing
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char saux[3000];

	while (1)
	{
		if (*(s + len) != 0)
		{
			*(saux + len) = *(s + len);
			len++;
		}
		else
			break;
	}
	for (; len > 0; len--)
	{
		*(s + i) = *(saux + len - 1);
		i++;
	}
}
