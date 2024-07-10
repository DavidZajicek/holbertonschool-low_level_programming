#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free dog_t
 * @d: dog to free
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (dog)
		free(dog);
}
