#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct dog
 *
 * @name: name of Struct dog
 * @age: age of Struct dog
 * @owner: Owner of Struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void int_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
