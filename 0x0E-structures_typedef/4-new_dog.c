#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int foo, bar, i;
	dog_t *dog;

	if (name == NULL || onwer == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (foo = 0; name[foo]; foo++)
		;
	foo++;
	dog->name = malloc(foo * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < foo; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (bar = 0; owner[bar]; bar++)
		;
	bar++;
	dog->owner = malloc(bar * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < bar; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
