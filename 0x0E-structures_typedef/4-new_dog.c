#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - A function that creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = (dog_t *)malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	if (name == NULL)
	{
		return (NULL);
	}
	else
	{
		new_dog->name = name;
	}
	new_dog->age = age;
	if (owner == NULL)
	{
		return (NULL);
	}
	else
	{
		new_dog->owner = owner;
	}
	return (new_dog);
}
