#include "holberton.h"

/**
 * free_grid - free the memory in 2 dimensional array grid
 * @grid: grid
 * @height: height of the grid
 * Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
