#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the grid
 * @grid: grid to free
 * @height: depth of array to free
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
