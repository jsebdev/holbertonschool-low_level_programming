#include "holberton.h"

/**
 * main - prints all arguments of a program
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", *(argv + i));
		i++;
	}
	return (0);
}
