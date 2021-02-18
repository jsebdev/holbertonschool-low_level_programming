#include "holberton.h"

/**
 * leet - encode a tring into leet
 * @s: string to encode
 * Return: encoded string
 */
char *leet(char *s)
{
	int numbers[] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	char *letters = "aAeEoOtTlL";
	int i, k;

	for (i = 0; *(s + i) != 0; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (*(s + i) == *(letters + k))
			{
				*(s + i) = *(numbers + k) + '0';
				break;
			}
		}
	}
	return (s);
}
