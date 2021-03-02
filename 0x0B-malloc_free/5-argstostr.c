#include "holberton.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: pointer to a string with all the arguments
*/
char *argstostr(int ac, char **av)
{
	int i, j = 0, k = 0, len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (*(*(av + i) + j))
		{
			len++;
			j++;
		}
		j = 0;
	}
	len += ac + 1;

	s = malloc(sizeof(char) * len);
	for (i = 0; s != NULL && i < ac; i++)
	{
		j = 0;
		while (*(*(av + i) + j))
		{
			*(s + k) = *(*(av + i) + j);
			j++;
			k++;
		}
		*(s + k) = '\n';
		k++;
	}
	return (s);
}
