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
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (malloc(nmemb * size));
}
