#include "holberton.h"

/**
 * create_array - creates an array of chars, and initializes it
 * with a specific char
 * @size: size of the char
 * @c: char
 * Return: Return a pointer to the initialized char
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (s);
	for (i = 0; i < size; i++)
		*(s + i) = c;
	return (s);
}
