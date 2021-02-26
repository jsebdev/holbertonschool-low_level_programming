#include "holberton.h"

/**
 * chartoint_check - convert a chart into an int
 * @num: char
 * @check: if num has a non numeric symbol, check is 0, otherwise is 1
 * Return: int of the char
*/
int chartoint_check(char *num, int *check)
{
	int n = 0, s = 1;

	if (*num == '-')
	{
		s = -1;
		num++;
	}
	while (*num)
	{
		if (*num >= '0' && *num <= '9')
		{
			n = n * 10 + (*num - '0');
			num++;
		}
		else
		{
			*check = 0;
			return (n);
		}
	}
	n = n * s;
	*check = 1;
	return (n);
}

/**
 * main - add all the parameters
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0 if was possible add all the arguments, 1 if arguments
 * contains non numeric symbols
 */
int main(int argc, char **argv)
{
	int sum = 0, num, check, i;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i <= argc - 1; i++)
		{
			num = chartoint_check(*(argv + i), &check);
			if (check)
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
