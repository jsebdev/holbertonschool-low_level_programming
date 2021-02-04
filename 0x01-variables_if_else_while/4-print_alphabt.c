#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - funciont is the funcion the program start's running
 * Return: the function always returns 0
 **/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
