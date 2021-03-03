#include "holberton.h"

/**
 * _strdup - makes a copy of a string
 * @str: string
 * Return: pointer to a newly allocated space in memory,
 * which contains a copy of the string
*/
char *_strdup(char *str)
{
	int len = 0, i = 0;
	char *nstr;

	if (str == NULL)
		return (NULL);
	while (*(str + len))
		len++;
	if (len)
	{
		nstr = malloc(sizeof(char) * (len + 1));

		do {
			*(nstr + i) = *(str + i);
			i++;
		} while (*(str + i));
			return (nstr);
	}
	return (NULL);

}
