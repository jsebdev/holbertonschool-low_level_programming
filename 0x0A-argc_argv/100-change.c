#include "holberton.h"

/**
 * main - prints the minimum number of coins to make change for an
 * amount of money.
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 1 if number of arguments passed is not exactly 1
 * 0 otherwise
 */
int main(int argc, char **argv)
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(*(argv + 1));
		if (cents < 0)
		{
			printf("0\n");
			return (0);
		}
		coins += cents / 25;
		cents = cents % 25;
		coins += cents / 10;
		cents = cents % 10;
		coins += cents / 5;
		cents = cents % 5;
		coins += cents / 2;
		cents = cents % 2;
		coins += cents;
	}
	printf("%d\n", coins);
	return (0);
}
