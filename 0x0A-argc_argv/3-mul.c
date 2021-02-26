#include "holberton.h"

/**
 * chartoint - convert a chart into an int
 * @num: char
 * Return: int of the char
*/
int chartoint(char *num)
{
	int n = 0, s = 1;

	if (*num == '-')
	{
		s = -1;
		num++;
	}
	while (*num)
	{
		n = n * 10 + (*num - '0');
		num++;
	}
	n = n * s;
	return (n);
}

/**
 * main - multiply 2 numbers
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 if multiplication was done, 1 if no enough arguments
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", chartoint(*(argv + 1)) * chartoint(*(argv + 2)));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
