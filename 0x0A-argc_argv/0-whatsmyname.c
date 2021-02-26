#include "holberton.h"

/**
 * main - prints program's name
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: always 0
 */
int main(int argc, char **argv)
{
	UNUSED(argc);
	printf("%s\n", *argv);
	return (0);
}
