#include "dog.h"

/**
 * init_dog - initializes the structure of a dog
 *
 * @d: pointer to a struct
 * @name: pointer to the name of dog
 * @age: the age of the dog
 * @owner: pointer to the dog's owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
