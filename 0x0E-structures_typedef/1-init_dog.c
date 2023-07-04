#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initializes a variable of type struct dog
 * @d: pointer to struct dog
 * @name: struct member name
 * @age: struct member age
 * @owner: struct member owner
 *
 * Return: None.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	if (name == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
	}

	if (owner == NULL)
	{
		return;
	}
	else
	{
		d->owner = owner;
	}

	d->age = age;
}

