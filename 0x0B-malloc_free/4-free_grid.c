#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - entry point
 *@grid: grid to be freed
 *@height: height of matrix
 *Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
