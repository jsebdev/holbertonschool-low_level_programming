#include "holberton.h"

/**
 * root13 - encodes a string using rot13.
 * @s: string to encode
 * Return: the string encoded
 */

char *rot13(char *s)
{
	char *lb = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *la = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, k;

	for (; *(s + i) != 0; i++)
	{
		for (k = 0; k <= 52; k++)
		{
			if (*(s + i) == *(lb + k))
			{
				*(s + i) = *(la + k);
				break;
			}
		}
	}
	return (s);
}
