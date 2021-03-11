#include "variadic_functions.h"

/**
 * print_strings - print a serie of strings followed by a new line
 * @separator: string to be printed between strings
 * @n: quantity of strings to print
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(list, char*));
			if (i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(list);
}