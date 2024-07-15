#include <stddef.h>

/**
 * array_iterator - iterate on an array of data
 * @array: array
 * @size: size of the array
 * @action: pointer to a function to do for each element
 * Return: nothing
 */
void array_iterator(int *array, int size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
