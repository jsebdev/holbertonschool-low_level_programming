#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int (*p_address)(int, char **);
	int num_bytes, counter;
	num_bytes = counter = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	p_address = &main;
	for (counter = 0; counter < num_bytes; counter++)
		printf("%02x", ((unsigned char *) p_address)[counter]);
	printf("\n");
	return (0);
}
