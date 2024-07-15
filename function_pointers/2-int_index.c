#include <stdlib.h>

/**
 * int_index - find match
 * @array: array to check
 * @size: size of array
 * @cmp: function to use for comparison
 * Return: -1 if bad or not found, index if found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL || size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
