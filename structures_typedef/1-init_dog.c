#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize dog
 * @d: dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
