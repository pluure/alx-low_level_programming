#ifndef _dog_
#define _dog_

/**
 * struct dog - the structure of dog.
 * @name: name of dog
 * @age: age of the dog
 * @owner: dog owner
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
