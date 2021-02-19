#include "holberton.h"

/**
 * get10hexas - get 10 bytes from buffer and shows their value in hex
 * @b: buffer
 * @size: size of buffer
 * Return: Nothing
 */
void get10hexas(char *b, int size)
{
	int i = 0;

	for (; i < 10; i++)
	{
		if (i % 2 == 0)
			printf(" ");
		if (i >= size)
			printf("  ");
		else
			printf("%02x", *(b + i));
	}
}

/**
 * get10ascii - get 10 bytes from buffer and shows their ascii value
 * @b: buffer
 * @size: size of buffer
 * Return: Nothing
 */
void get10ascii(char *b, int size)
{
	int i = 0;

	for (; i < 10 && i < size; i++)
	{
		if (*(b + i) >= 32 && *(b + i) <= 126)
			printf("%c", *(b + i));
		else
			printf(".");
	}
}


/**
 * print_buffer - print a determined bytes from a buffer
 * @b: buffer to print
 * @size: bytes to print
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i = 0;

	for (; i < size; i += 10)
	{
		printf("%08x:", i);
		get10hexas(b + i, size - i);
		printf(" ");
		get10ascii(b + i, size - i);
		printf("\n");
	}
}
