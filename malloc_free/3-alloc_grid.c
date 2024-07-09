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
	int **result, i, j;

	result = malloc(height * sizeof(int *));

	if (result == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		result[i] = malloc(width * sizeof(int));
		for (j = 0; j < height; j++)
		{
			result[i][j] = 0;
		}
	}

	return (result);
}
