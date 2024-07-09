#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate 2D array of ints
 * @width: int
 * @height: int
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	grid = malloc(sizeof(int) * (width * height));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			grid[(i * width + j)] = 0;
		}
	}
	return (grid);
}
