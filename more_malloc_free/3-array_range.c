#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of ints
 * @min: starting num
 * @max: ending num
 * Return: array pointer
 */
int *array_range(int min, int max)
{
	int *result, i = 0;

	if (min > max)
		return (NULL);

	result = malloc(sizeof(int) * (max - min + 1));

	if (result == NULL)
		return (NULL);

	while (min <= max)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
