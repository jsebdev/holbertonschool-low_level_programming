#include "holberton.h"

/**
 * _calloc - allocates memory for an array of
 * nmemb elements of size bytes each and returns a pointer
 * to the allocated memory. The memory is set to zero.
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i = 0;

	if (!nmemb || !size)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		*(p + i) = 0;
	}

	return ((void *)p);
}
