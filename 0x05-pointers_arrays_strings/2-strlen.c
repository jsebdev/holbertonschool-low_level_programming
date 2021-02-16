# include "holberton.h"

/**
 * _strlen - measure the length of a string
 * @s: string to measure
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (1)
	{
		if (*(s + len) != 0)
			len++;
		else
			break;
	}
	return (len);
}
