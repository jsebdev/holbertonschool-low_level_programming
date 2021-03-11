#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

void *reallocando(void *ptr, unsigned int old_size, unsigned int new_size)
{
	return (_realloc(ptr, old_size, new_size));
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	/* char u = 'i'; */
	char *p, *p2;
	/* int i; */

	p = malloc(sizeof(char) * 10);
	p2 = p;
	printf("%c\n", *p);
	/* p = reallocando(p, sizeof(char) * 10, sizeof(char) * 98); */
	/* p = _realloc(p, sizeof(char) * 10, sizeof(char) * 98); */
	/* i = 0; */
	/* while (i < 98) */
	/* { */
	/* 	p[i++] = 98; */
	/* } */
	/* simple_print_buffer(p, 98); */
	free(p2);
	return (0);
}
