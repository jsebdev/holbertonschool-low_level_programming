#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	printf("%d\n", _strcmp("Maria", "mariaRamos"));
	printf("%d\n", _strcmp("Carlos", "Carlos"));
	printf("%d\n", _strcmp("mariaRamos", "MAria"));

	printf("\n");
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", strcmp(s2, s1));
	printf("%d\n", strcmp(s1, s1));
	printf("%d\n", strcmp("Maria", "mariaRamos"));
	printf("%d\n", strcmp("Carlos", "Carlos"));
	printf("%d\n", strcmp("mariaRamos", "MAria"));

	return (0);
}
