#include "holberton.h"

/**
 * main - prints number of arguments
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
