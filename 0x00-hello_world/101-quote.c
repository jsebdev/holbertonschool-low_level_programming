#include <stdio.h>
#include <unistd.h>

/**
 * main - funciont is the funcion the program start's running
 * Return: the function always returns 0
 **/
int main(void)
{
	char *p = "and that piece of art is useful - Dora Korpar, 2015-10-19\n";
	write(2, p, 58);
	return (0);
}
