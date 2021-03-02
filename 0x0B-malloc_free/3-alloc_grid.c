#include "holberton.h"

/**
 * alloc_grid - create a 2 dimensional array of integers
 * inizialiced with zeros.
 * @width: width
 * @height: height
 * Return: pointer to the matrix, NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int **mat;
	int i, j;

	mat = malloc(sizeof(int *) * height);
	if (mat)
	{
		for (i = 0; i < height; i++)
		{
			*(mat + i) = malloc(sizeof(int) * width);
			/* put zeros on the just allocated pointer */
			for (j = 0; j < width; j++)
				*(*(mat + i) + j) = 0;
		}
	}
	return (mat);
}
