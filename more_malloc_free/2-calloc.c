#include "main.h"
#include <stdlib.h>

/**
 * _calloc - assign memory for an array
 * @nmemb: array size
 * @size: byte size
 * Return: pointer to new memory location
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total = nmemb * size, i = 0;
	void *result;

	if (nmemb == 0 || size == 0)
		return (NULL);
	result = malloc(total);
	if (result == NULL)
		return (NULL);
	while (i < total)
	{
		result[i] = 0;
		i++;
	}
	return (result);
}
