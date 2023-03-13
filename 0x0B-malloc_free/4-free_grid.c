#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Free previously allocated memory.
 * @grid: holds address to 2d array.
 * @height: number of columns in 2d array.
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
