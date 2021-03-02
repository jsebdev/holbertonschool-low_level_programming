#include "holberton.h"

/**
 * cpy_word - makes a copy of the first word found in string
 * @str: string
 * Return: pointer to a newly allocated space in memory,
 * which contains a copy of the first word found in str
*/
char *cpy_word(char *str)
{
	int len = 0, i = 0;
	char *nstr;

	if (*str == '\0')
		return (NULL);
	while (*(str + len) != ' ' && *(str + len) != '\0')
		len++;
	if (len)
	{
		nstr = malloc(sizeof(char) * (len + 1));

		do {
			*(nstr + i) = *(str + i);
			i++;
		} while (*(str + i) != ' ' && *(str + len) != '\0');
		return (nstr);
	}
	return (NULL);

}


/**
 * alloc_grid - create a 2 dimensional array of integers
 * inizialiced with zeros.
 * @width: width
 * @height: height
 * Return: pointer to the matrix, NULL on failure
*/
char **strtow(char *str)
{
	char **words;
	int i, num_words = 0, counter = 0;

	for (i = 0; *(str + i); i++)
	{

		/* Aqui hay un error porque siempre estaremos sumando 1*/
		
		if (*str != ' ')
			num_words = 1; printf("empezamos con palabra\n");
		if (*(str + i) == ' ' && *(str + i + 1) != ' ')
		{
			printf("Encontramos palabra: %s\n", str + i + 1);
			num_words++;
		}
	}
	printf("num_words = %d\n", num_words);
	words = malloc(sizeof(char *) * num_words);
	for (i = 0; *(str + i); i++)
	{
		if (*str != ' ')
		{
			*words = cpy_word(str);
			counter++;
		}
		if (*(str + i) == ' ' && *(str + i + 1) != ' ')
		{
			printf("Encontramos palabra: %s\n", str + i + 1);
			*(words + counter) = cpy_word(str + i + 1);
			counter++;
		}
	}
	return (words);
}
