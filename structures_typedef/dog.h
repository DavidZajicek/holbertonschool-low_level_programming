#ifndef Dog
#define Dog

/**
 * struct dog - dog
 * @name: string name of the dog
 * @age: float age of the dog
 * @owner: String of the owner name
 *
 * Description: a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
