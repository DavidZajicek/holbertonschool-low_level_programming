#include "dog.h"
#include <stdlib.h>

/**
 * free_everything - free everything
 * @dog: dog to free
 * @dog_name: free
 * @owner_name: free
 * Return: nothing
 */
void free_everything(dog_t *dog, char *dog_name, char *owner_name)
{
	if (dog)
		free(dog);
	if (dog_name)
		free(dog_name);
	if (owner_name)
		free(owner_name);
}

/**
 * alloc_string - do the thing
 * @str: string
 * Return: memory pointer
 */
void *alloc_string(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (malloc((1 + length) * sizeof(char)));
}

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
	int i;
	char *dog_name, *owner_name;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog_name = alloc_string(name);
	owner_name = alloc_string(owner);

	if (dog_name == NULL || owner_name == NULL)
	{
		free_everything(dog, dog_name, owner_name);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		dog_name[i] = name[i];
	}
	dog_name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
	{
		owner_name[i] = owner[i];
	}
	owner_name[i] = '\0';
	dog->name = dog_name;
	dog->age = age;
	dog->owner = owner_name;
	return (dog);
}
