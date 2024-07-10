#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog_t
 * @d: dog to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d.owner != NULL)
		free(d.owner);
	if (d.name != NULL)
		free(d.name);
	free(d);
}
