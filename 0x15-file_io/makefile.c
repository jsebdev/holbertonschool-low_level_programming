# include "holberton.h"

/**
 * main - copies the content of a file to another file.
 * @argc: argument counts
 * @argv: argument vector
 * Return: always zero
 */
int main(void)
{
	int file1, i;

	file1 = open("elfile", O_CREAT | O_APPEND | O_RDWR | O_TRUNC, 0600);

	for (i = 0; i < 1500; i++)
	{
		dprintf(file1, "%d ", i);
	}

	dprintf(file1, "\n");

	close(file1);

	return (0);
}
