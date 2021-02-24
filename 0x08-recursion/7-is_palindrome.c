#include "holberton.h"


/**
 * guess_palindrome - check if the first len bytes of string s
 * is a palindrome
 * @s: string
 * @len: bytes to check
 * Return: 1 if first len bytes of s is palindrome, 0 otherwise
 */
int guess_palindrome(char *s, int len)
{
	if (len > 1)
	{
		if (*s == *(s + len - 1))
		{
			len -= 2;
			s++;
			return (guess_palindrome(s, len));
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_palindrome - check if a string is palindrome
 * @s: string
 * Return: 1 if s is palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (*(s + len))
		len++;
	return (guess_palindrome(s, len));
}
