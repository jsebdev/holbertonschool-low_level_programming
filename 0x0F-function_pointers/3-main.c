#include "3-calc.h"

/**
 * main - perfomr simple operations + - * / and %
 * @argc: argument count
 * @argv: argument's vector
 * Return: always cero
 */
int main(int argc, char **argv)
{
	int a, b, r;
	int (*operator)(int, int) = NULL;

	printf("argc = %d\n", argc);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	operator = get_op_func(argv[2]);

	r = (*operator)(a, b);
	printf("%d\n", r);
	return (0);
}
