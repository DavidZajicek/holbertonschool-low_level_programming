#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog_t or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
