#include "function_pointers.h"
/**
 * print_name - prints a name using a especified function
 * @name: name
 * @f: function to print name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
