#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: amount of memory to allocate
 * Return: memory address or exit (98)
 */
void *malloc_checked(unsigned int b)
{
	void *result = malloc(b);

	if (result == NULL)
		exit(98);
	return (result);
}
