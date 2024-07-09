#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array
 * @size: size of the array
 * @c: character to intialise array with
 * Return: pointer or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *result;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	result = malloc(sizeof(char) * size);

	if (result == NULL)
		return (NULL);

	while (i < size)
	{
		result[i] = c;
		i++;
	}

	return (result);
}
